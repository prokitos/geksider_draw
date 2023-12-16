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
#include <QtWidgets/QLineEdit>
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
    QSpinBox *inputH;
    QSpinBox *inputW;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *inputAngle;
    QLabel *label_9;
    QLineEdit *inputScore;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 300);
        MainWindow->setMinimumSize(QSize(300, 300));
        MainWindow->setMaximumSize(QSize(300, 300));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 220, 121, 31));
        inputH = new QSpinBox(centralwidget);
        inputH->setObjectName("inputH");
        inputH->setGeometry(QRect(110, 40, 81, 21));
        inputH->setMinimum(100);
        inputH->setMaximum(1000);
        inputH->setValue(500);
        inputW = new QSpinBox(centralwidget);
        inputW->setObjectName("inputW");
        inputW->setGeometry(QRect(110, 10, 81, 21));
        inputW->setMinimum(100);
        inputW->setMaximum(1000);
        inputW->setValue(500);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 10, 49, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 40, 49, 16));
        inputAngle = new QSpinBox(centralwidget);
        inputAngle->setObjectName("inputAngle");
        inputAngle->setGeometry(QRect(110, 80, 81, 21));
        inputAngle->setMinimum(3);
        inputAngle->setMaximum(10);
        inputAngle->setValue(6);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 80, 49, 16));
        inputScore = new QLineEdit(centralwidget);
        inputScore->setObjectName("inputScore");
        inputScore->setGeometry(QRect(110, 140, 171, 22));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 140, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "create hexider", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        inputScore->setText(QCoreApplication::translate("MainWindow", "5 5 5 5 5 5", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
