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
    QString temp = ui->inputScore->text();
    std::stringstream tempString(temp.toStdString());
    std::vector<int> score(std::istream_iterator<int>(tempString),{});

    int angleCount = ui->inputAngle->value();
    int heigh = ui->inputH->value();
    int width = ui->inputW->value();

    // Добавить преобразование при строковых элемента. Если элементов в векторе меньше, то добавить 5
    geksaiderMain(score, angleCount, width, heigh);
}

