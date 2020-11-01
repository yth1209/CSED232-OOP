#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int i,j;
    ui->setupUi(this);
    velocity=new int;
    *velocity=0;

    playmode=0;
    boxmode=1;
    gas1mode=0;
    gas2mode=0;
    gas3mode=0;
    time=new QTimer(this);

    scene = new QGraphicsScene;

    ui->graphicsView->setScene(scene);


    // anti-aliasing
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setAttribute(Qt::WA_TranslucentBackground, true);
    //
    // The bounding rectangle of the scene
    // The scene rectangle defines the extent of the scene.
    // It is primarily used by QGraphicsView
    // to determine the view's default scrollable area,
    // and by QGraphicsScene to manage item indexing.
    // void	setSceneRect(qreal x, qreal y, qreal w, qreal h)
    scene->setSceneRect(0, 0, 600, 600);

    QLineF topLine(scene->sceneRect().topLeft(),
                   scene->sceneRect().topRight());
    QLineF leftLine(scene->sceneRect().topLeft(),
                   scene->sceneRect().bottomLeft());
    QLineF rightLine(scene->sceneRect().topRight(),
                   scene->sceneRect().bottomRight());
    QLineF bottomLine(scene->sceneRect().bottomLeft(),
                   scene->sceneRect().bottomRight());

    QPen myPen = QPen(Qt::white);

    scene->addLine(topLine, myPen);
    scene->addLine(leftLine, myPen);
    scene->addLine(rightLine, myPen);
    scene->addLine(bottomLine, myPen);
    viewresult=new QTableWidget;


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scene->addRect(QRect(i*120,j*120,120,120),myPen,QBrush(Qt::black));

        }
    }

    viewresult->setRowCount(5);
    viewresult->setColumnCount(5);
    for(int i=0;i<5;i++){
        viewresult->setRowHeight(i,100);
        viewresult->setColumnWidth(i, 100);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete time;
    delete scene;
    delete velocity;

    delete viewresult;

}




void MainWindow::on_Gasbutton_clicked(){

    QString string="Gas1\nweight :5\t\t\nRadius :3 \ncolor :green \n\nGas2\nweight :10 \nRadius :4 \ncolor :red \n\nGas3\nweight :20 \nRadius :5 \ncolor :blue ";
    QMessageBox *gas=new QMessageBox;
    gas->setText(string);
    gas->setWindowTitle("Gas category");
    gas->exec();
}

void MainWindow::on_Boxbutton_clicked()
{
    boxmode=1;
    gas1mode=0;
    gas2mode=0;
    gas3mode=0;
}

void MainWindow::on_gas1button_clicked()
{
    boxmode=0;
    gas1mode=1;
    gas2mode=0;
    gas3mode=0;
    qDebug() <<1;



}

void MainWindow::on_gas2button_clicked()
{
    boxmode=0;
    gas1mode=0;
    gas2mode=1;
    gas3mode=0;
}

void MainWindow::on_gas3button_clicked()
{
    boxmode=0;
    gas1mode=0;
    gas2mode=0;
    gas3mode=1;
}



void MainWindow::on_Playbutton_clicked()
{
    if(playmode==0){
        playmode=1;

        time = new QTimer(this);
        connect(time, SIGNAL(timeout()),scene, SLOT(advance()));

        time->start((*velocity/10)*10+5);

        }

}

void MainWindow::on_stopbutton_clicked()
{
    time->stop();
    playmode=0;
}



void MainWindow::mousePressEvent(QMouseEvent *eventMove){
    QPoint p = this->mapFromGlobal(QCursor::pos());
    if(boxmode==1){
        QPen myPen = QPen(Qt::white);
        if(scene->itemAt(p.x(),p.y(),trans)==NULL){
            for(int i=(p.x()/120)*120+1;i<(p.x()/120)*120+119;i++){
                for(int j=(p.y()/120)*120+1;j<(p.y()/120)*120+119;j++){

                    delete scene->itemAt(i,j,trans);
                }
            }
            scene->addRect(QRect((p.x()/120)*120,(p.y()/120)*120,120,120),myPen,QBrush(Qt::black));
            qDebug() <<1;
        }
        else{
            qDebug() << static_cast<int>(scene->itemAt(p.x(),p.y(),trans)->x());
            delete scene->itemAt(p.x(),p.y(),trans);
        }
    }
    if(gas1mode==1){
        if(scene->itemAt(p.x(),p.y(),trans)!=nullptr){
            return;
        }
        MyItem *item = new MyItem(0,2.0,p.x(),p.y());
        scene->addItem(item);
        scene->update();
    }
    if(gas2mode==1){
        if(scene->itemAt(p.x(),p.y(),trans)!=nullptr){
            return;
        }
        MyItem2 *item = new MyItem2(0,1.8,p.x(),p.y());
        scene->addItem(item);
        scene->update();
    }
    if(gas3mode==1){
        if(scene->itemAt(p.x(),p.y(),trans)!=nullptr){
            return;
        }
        MyItem3 *item = new MyItem3(0,1.5,p.x(),p.y());
        scene->addItem(item);
        scene->update();
    }

}


void MainWindow::on_graph1button_clicked()
{


    int i,j;
    for(i=0;i<50;i++){
        count[i]=0;
    }

     QList<QGraphicsItem *> items2= scene->items();

    for(i=0;i<items2.size();i++){
        if(items2[i]!=nullptr){
        if(static_cast<int>(items2[i]->x())!=0){
        int column= (static_cast<int>(items2[i]->x())/120);
        int row= (static_cast<int>(items2[i]->y())/120);
        count[row*10+column]++;
        }
        }
    }
    QString st;
    QTableWidgetItem * item=new QTableWidgetItem;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            st=QString::number(count[i*10+j]);
            item=new QTableWidgetItem(st);
            viewresult->setItem(i,j,item);
        }
    }

    viewresult->show();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{

    *velocity=value;
}


