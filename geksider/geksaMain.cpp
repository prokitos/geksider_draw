#include "geksaMain.h"


void geksaiderMain(std::vector<int> score, int width, int height)
{
    // создание переменных для рисования
    QPicture pi;
    QPainter p(&pi);

    // задание границы рисунка
    p.drawLine(0, 0, 0, height);
    p.drawLine(0, 0, width, 0);

    // задать жирные контуры
    p.setPen(QPen(Qt::black, 2));

    // координаты середина, и координаты контура фигуры.
    Point middleDot;
    std::vector<Point> OutlineDots;

    // создание контуров и диагональных линий
    createOutline(p,middleDot,OutlineDots, width, height);

    // получение балловых значений
    std::vector<Point> outer;
    cordConvert(score, outer, middleDot, OutlineDots);
    geksaDraw(outer,"Fill",p);

    // завершение рисования
    p.end();

    // вывод картинки и надписей на форму
    createPicture(pi, OutlineDots, width, height);

}

// перевод значений в координаты
void cordConvert(std::vector<int> numbers, std::vector<Point> &cords, Point middle, std::vector<Point> Outliner)
{
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

// создание надписей
QLabel *createLabel(int x, int y, std::string name, QLabel *owner)
{
    QLabel *temp = new QLabel(name.c_str(),owner);
    temp->setStyleSheet("QLabel { color : red; font-size:15pt;}");
    temp->setText(name.c_str());
    temp->move(x,y);
    return temp;
}

// создание формы и вывод на неё изображений и надписей
void createPicture(QPicture &pi, std::vector<Point> &OutlineDots, int width, int height)
{
    // создание слоя для связи формы и надписей
    QVBoxLayout *layout = new QVBoxLayout();

    // создание главной формы
    QLabel *l = new QLabel();
    l->setFixedHeight(height);
    l->setFixedWidth(width);
    l->setPicture(pi);

    // создание надписей
    QLabel *A = createLabel(OutlineDots[0].x - 5,OutlineDots[0].y - 26, "A", l);
    QLabel *B = createLabel(OutlineDots[1].x + 7,OutlineDots[1].y - 12, "B", l);
    QLabel *C = createLabel(OutlineDots[2].x + 7,OutlineDots[2].y - 15, "C", l);
    QLabel *D = createLabel(OutlineDots[3].x - 5,OutlineDots[3].y, "D", l);
    QLabel *E = createLabel(OutlineDots[4].x - 15,OutlineDots[4].y - 15, "E", l);
    QLabel *F = createLabel(OutlineDots[5].x - 15,OutlineDots[5].y - 15, "F", l);

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

        instances.setPen(QPen(Qt::red, 1));
        instances.drawPath(path);
        instances.setPen(QPen(Qt::black, 2));
    }

}

// контур фигуры
void createOutline(QPainter &p, Point &middleDot, std::vector<Point> &bigGeks, int width, int height)
{

    // задание стартовых переменных
    int min75Y = height / 6.6666;
    int min100X = width / 5;
    int min100Y = height / 5;
    int midX = width  / 2;
    int min175Y = min100Y + min75Y;
    int min325Y = height - (min100Y + min75Y);
    int min425Y = height - min75Y;

    // рисование внутренних линий
    p.drawLine(midX, min75Y, midX, min425Y);
    p.drawLine(width - min100X, min175Y, min100X, min325Y);
    p.drawLine(min100X, min175Y, width - min100X, min325Y);
    middleDot = {width / 2,height / 2};

    // рисование контура
    bigGeks =
    {
        {midX,min75Y},
        {width - min100X,min175Y},
        {width - min100X,min325Y},
        {midX,min425Y},
        {min100X,min325Y},
        {min100X,min175Y},
        {midX,min75Y}
    };
    geksaDraw(bigGeks,"Line",p);

    // рисование внутреннего контура
    std::vector<Point> smallGeks
    {
        { (midX + middleDot.x) / 2,( min75Y + middleDot.y) / 2 },
        { (width - min100X + middleDot.x) / 2,(min175Y + middleDot.y) / 2 },
        { (width - min100X + middleDot.x) / 2,(min325Y + middleDot.y) / 2 },
        { (midX + middleDot.x) / 2,(min425Y + middleDot.y) / 2 },
        { (min100X + middleDot.x) / 2,(min325Y + middleDot.y) / 2 },
        { (min100X + middleDot.x) / 2,(min175Y + middleDot.y) / 2 },
        { (midX + middleDot.x) / 2,( min75Y + middleDot.y) / 2 }
    };
    geksaDraw(smallGeks,"Line",p);

}
