#include "geksaMain.h"


void geksaiderMain(std::vector<int> score)
{
    // создание переменных для рисования
    QPicture pi;
    QPainter p(&pi);
    p.setPen(QPen(Qt::black, 2));

    // задание границы рисунка
    p.drawLine(0, 0, 0, 500);
    p.drawLine(0, 0, 500, 0);

    // координаты середина, и координаты контура фигуры.
    Point middleDot;
    std::vector<Point> OutlineDots;

    // создание контуров и диагональных линий
    createOutline(p,middleDot,OutlineDots);

    // получение балловых значений
    std::vector<Point> outer;
    cordConvert(score, outer, middleDot, OutlineDots);
    geksaDraw(outer,"Fill",p);

    // завершение рисования
    p.end();

    // вывод картинки и надписей на форму
    createPicture(pi, OutlineDots);

}

// перевод значений в координаты
void cordConvert(std::vector<int> numbers, std::vector<Point> &cords, Point middle, std::vector<Point> Outliner)
{
    int x = 15;
    for(int i = 0; i < Outliner.size() - 1; i++)
    {
        int max = std::max(Outliner[i].x, middle.x);
        int min = std::min(Outliner[i].x, middle.x);
        int difference = ((max - min) * numbers[i] / 10) + 1;
        int point1;
        if(min == middle.x)
            point1 = min + difference;
        else
            point1 = max - difference;

        max = std::max(Outliner[i].y, middle.y);
        min = std::min(Outliner[i].y, middle.y);
        difference = ((max - min) * numbers[i] / 10) + 1;
        int point2;
        if(min == middle.y)
            point2 = min + difference;
        else
            point2 = max - difference;

        Point temp = {point1, point2};
        cords.push_back(temp);
    }
    cords.push_back(cords[0]);
}

// создание формы и вывод на неё изображений и надписей
void createPicture(QPicture &pi, std::vector<Point> &OutlineDots)
{
    // создание слоя для связи формы и надписей
    QVBoxLayout *layout = new QVBoxLayout();

    // создание главной формы
    QLabel *l = new QLabel();
    l->setFixedHeight(500);
    l->setFixedWidth(500);
    l->setPicture(pi);

    // создание надписей
    QLabel *A = new QLabel("A",l);
    A->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    A->setText("A");
    A->move(OutlineDots[0].x - 5,OutlineDots[0].y - 26);
    QLabel *B = new QLabel("B",l);
    B->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    B->setText("B");
    B->move(OutlineDots[1].x + 7,OutlineDots[1].y - 12);
    QLabel *C = new QLabel("C",l);
    C->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    C->setText("C");
    C->move(OutlineDots[2].x + 7,OutlineDots[2].y - 15);
    QLabel *D = new QLabel("D",l);
    D->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    D->setText("D");
    D->move(OutlineDots[3].x - 5,OutlineDots[3].y);
    QLabel *E = new QLabel("E",l);
    E->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    E->setText("E");
    E->move(OutlineDots[4].x - 15,OutlineDots[4].y - 15);
    QLabel *F = new QLabel("F",l);
    F->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    F->setText("F");
    F->move(OutlineDots[5].x - 15,OutlineDots[5].y - 15);

    // связь формы и надписей
    layout->addWidget(l);
    layout->addWidget(A);
    layout->addWidget(B);
    layout->addWidget(C);
    layout->addWidget(D);
    layout->addWidget(E);
    layout->addWidget(F);

    // вывод формы на экран
    l->show();
}

// рисование фигуры по точкам
void geksaDraw(std::vector<Point> temp, std::string type, QPainter &instances)
{
    QPainterPath path;
    path.moveTo (temp[0].x, temp[0].y);
    for(auto i : temp)
    {
        path.lineTo (i.x, i.y);
    }

    // просто лисование линий (контуров)
    if(type == "Line")
        instances.drawPath(path);

    // заливка фигуры
    if(type == "Fill")
    {
        QColor temp(200, 124, 84, 70);
        instances.fillPath (path, QBrush (temp));
    }

}

// контур фигуры
void createOutline(QPainter &p, Point &middleDot, std::vector<Point> &bigGeks)
{
    // рисование внутренних линий
    p.drawLine(250, 75, 250, 425);
    p.drawLine(400, 175, 100, 325);
    p.drawLine(100, 175, 400, 325);
    middleDot = {250,250};

    // рисование контура
    bigGeks =
    {
        {250,75},
        {400,175},
        {400,325},
        {250,425},
        {100,325},
        {100,175},
        {250,75}
    };
    geksaDraw(bigGeks,"Line",p);

    // рисование внутреннего контура
    std::vector<Point> smallGeks
    {
        { (250 + middleDot.x) / 2,( 75 + middleDot.y) / 2 },
        { (400 + middleDot.x) / 2,(175 + middleDot.y) / 2 },
        { (400 + middleDot.x) / 2,(325 + middleDot.y) / 2 },
        { (250 + middleDot.x) / 2,(425 + middleDot.y) / 2 },
        { (100 + middleDot.x) / 2,(325 + middleDot.y) / 2 },
        { (100 + middleDot.x) / 2,(175 + middleDot.y) / 2 },
        { (250 + middleDot.x) / 2,( 75 + middleDot.y) / 2 }
    };
    geksaDraw(smallGeks,"Line",p);

}
