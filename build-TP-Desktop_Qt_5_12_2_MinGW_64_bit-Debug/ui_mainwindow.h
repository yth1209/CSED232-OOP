/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *Gasbutton;
    QPushButton *Playbutton;
    QPushButton *graph1button;
    QPushButton *gas2button;
    QPushButton *Boxbutton;
    QPushButton *graph2button;
    QPushButton *gas1button;
    QPushButton *Resetbutton;
    QPushButton *gas3button;
    QTableWidget *boxtable;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 680);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 680));
        MainWindow->setMaximumSize(QSize(600, 680));
        Gasbutton = new QPushButton(MainWindow);
        Gasbutton->setObjectName(QString::fromUtf8("Gasbutton"));
        Gasbutton->setGeometry(QRect(240, 0, 120, 40));
        Playbutton = new QPushButton(MainWindow);
        Playbutton->setObjectName(QString::fromUtf8("Playbutton"));
        Playbutton->setGeometry(QRect(0, 0, 120, 40));
        graph1button = new QPushButton(MainWindow);
        graph1button->setObjectName(QString::fromUtf8("graph1button"));
        graph1button->setGeometry(QRect(360, 0, 120, 40));
        gas2button = new QPushButton(MainWindow);
        gas2button->setObjectName(QString::fromUtf8("gas2button"));
        gas2button->setGeometry(QRect(240, 640, 120, 40));
        Boxbutton = new QPushButton(MainWindow);
        Boxbutton->setObjectName(QString::fromUtf8("Boxbutton"));
        Boxbutton->setGeometry(QRect(0, 640, 120, 40));
        graph2button = new QPushButton(MainWindow);
        graph2button->setObjectName(QString::fromUtf8("graph2button"));
        graph2button->setGeometry(QRect(480, 0, 120, 40));
        gas1button = new QPushButton(MainWindow);
        gas1button->setObjectName(QString::fromUtf8("gas1button"));
        gas1button->setGeometry(QRect(120, 640, 120, 40));
        Resetbutton = new QPushButton(MainWindow);
        Resetbutton->setObjectName(QString::fromUtf8("Resetbutton"));
        Resetbutton->setGeometry(QRect(120, 0, 120, 40));
        gas3button = new QPushButton(MainWindow);
        gas3button->setObjectName(QString::fromUtf8("gas3button"));
        gas3button->setGeometry(QRect(360, 640, 120, 40));
        boxtable = new QTableWidget(MainWindow);
        if (boxtable->columnCount() < 5)
            boxtable->setColumnCount(5);
        if (boxtable->rowCount() < 5)
            boxtable->setRowCount(5);
        boxtable->setObjectName(QString::fromUtf8("boxtable"));
        boxtable->setGeometry(QRect(0, 40, 600, 600));
        boxtable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        boxtable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        boxtable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);
        boxtable->setSelectionMode(QAbstractItemView::NoSelection);
        boxtable->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        boxtable->setRowCount(5);
        boxtable->setColumnCount(5);
        boxtable->horizontalHeader()->setVisible(false);
        boxtable->horizontalHeader()->setDefaultSectionSize(120);
        boxtable->horizontalHeader()->setMinimumSectionSize(120);
        boxtable->verticalHeader()->setVisible(false);
        boxtable->verticalHeader()->setDefaultSectionSize(120);
        boxtable->verticalHeader()->setMinimumSectionSize(120);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", nullptr));
        Gasbutton->setText(QApplication::translate("MainWindow", "Gas", nullptr));
        Playbutton->setText(QApplication::translate("MainWindow", "Play", nullptr));
        graph1button->setText(QApplication::translate("MainWindow", "Graph1", nullptr));
        gas2button->setText(QApplication::translate("MainWindow", "Gas2", nullptr));
        Boxbutton->setText(QApplication::translate("MainWindow", "BOX", nullptr));
        graph2button->setText(QApplication::translate("MainWindow", "Graph2", nullptr));
        gas1button->setText(QApplication::translate("MainWindow", "Gas1", nullptr));
        Resetbutton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        gas3button->setText(QApplication::translate("MainWindow", "Gas3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
