#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QColor>
#include <QTimer>
#include <QtDebug>
#include <QTableWidget>
#include <QMessageBox>
#include <QString>
#include <QMouseEvent>
#include <iostream>
#include <vector>
#include "gasitem.h"
#include <QTransform>
#include <QList>
#include <QListIterator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_Gasbutton_clicked();

    void on_Boxbutton_clicked();

    void on_gas1button_clicked();

    void on_gas2button_clicked();

    void on_gas3button_clicked();



    void on_Playbutton_clicked();

    void on_stopbutton_clicked();



    void mousePressEvent(QMouseEvent *eventMove);




    void on_graph1button_clicked();

    void on_horizontalSlider_valueChanged(int value);



private:
    QTimer * time;
    Ui::MainWindow *ui;
    bool playmode,boxmode,gas1mode,gas2mode,gas3mode;

    QGraphicsScene *scene;
    QTransform trans;
    QTableWidget * viewresult;
    int *velocity;
    int count[50];

};

#endif // MAINWINDOW_H
