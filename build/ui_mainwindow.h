/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QSpinBox *input1;
    QSpinBox *input2;
    QSpinBox *input3;
    QSpinBox *input4;
    QSpinBox *input5;
    QSpinBox *input6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 220, 121, 31));
        input1 = new QSpinBox(centralwidget);
        input1->setObjectName("input1");
        input1->setGeometry(QRect(40, 110, 42, 22));
        input1->setMaximum(10);
        input1->setValue(5);
        input2 = new QSpinBox(centralwidget);
        input2->setObjectName("input2");
        input2->setGeometry(QRect(120, 110, 42, 22));
        input2->setMaximum(10);
        input2->setValue(5);
        input3 = new QSpinBox(centralwidget);
        input3->setObjectName("input3");
        input3->setGeometry(QRect(200, 110, 42, 22));
        input3->setMaximum(10);
        input3->setValue(5);
        input4 = new QSpinBox(centralwidget);
        input4->setObjectName("input4");
        input4->setGeometry(QRect(40, 170, 42, 22));
        input4->setMaximum(10);
        input4->setValue(5);
        input5 = new QSpinBox(centralwidget);
        input5->setObjectName("input5");
        input5->setGeometry(QRect(120, 170, 42, 22));
        input5->setMaximum(10);
        input5->setValue(5);
        input6 = new QSpinBox(centralwidget);
        input6->setObjectName("input6");
        input6->setGeometry(QRect(200, 170, 42, 22));
        input6->setMaximum(10);
        input6->setValue(5);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 90, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 90, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 90, 49, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 150, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 150, 49, 16));
        label_5->setLineWidth(0);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 150, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "create hexider", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
