#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "geksaMain.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // принятие значений с формы
    std::vector<int> score {};
    score =
    {
    ui->input1->value(),
    ui->input2->value(),
    ui->input3->value(),
    ui->input4->value(),
    ui->input5->value(),
    ui->input6->value()
    };

    geksaiderMain(score);
}

