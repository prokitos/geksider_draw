#include "geksaMain.h"




void geksaDraw(std::vector<Point> temp, std::string type, QPainter &instances)
{
    QPainterPath path;
    path.moveTo (temp[0].x, temp[0].y);
    for(auto i : temp)
    {
        path.lineTo (i.x, i.y);
    }

    if(type == "Line")
        instances.drawPath(path);

    if(type == "Fill")
        instances.fillPath (path, QBrush (QColor ("blue")));
}


void geksaiderMain()
{

    QPicture pi;
    QPainter p(&pi);

    // задание границы рисунка
    p.drawLine(0, 0, 0, 500);
    p.drawLine(0, 0, 500, 0);


    // получение балловых значений
    int s1 = 10;
    int s2 = 10;
    int s3 = 10;
    int s4 = 10;
    int s5 = 10;
    int s6 = 10;

    //преобразование в координаты

    //заливка многоугольника
//        QPainterPath path;
//        path.moveTo (250, 75);
//        path.lineTo (400, 175);
//        path.lineTo (400, 325);
//        path.lineTo (250, 425);
//        path.lineTo (100, 325);
//        path.lineTo (100, 175);
//        path.lineTo (250, 75);
//        p.drawPath(path);
//    p.fillPath (path, QBrush (QColor ("blue")));
//     geksaDraw(bigGeks,"Fill");


    // рисование внутренних линий
    p.drawLine(250, 75, 250, 425);
    p.drawLine(400, 175, 100, 325);
    p.drawLine(100, 175, 400, 325);
    Point middle = {250,250};

    // рисование контура
    std::vector<Point> bigGeks
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
            { (250 + middle.x) / 2,( 75 + middle.y) / 2 },
            { (400 + middle.x) / 2,(175 + middle.y) / 2 },
            { (400 + middle.x) / 2,(325 + middle.y) / 2 },
            { (250 + middle.x) / 2,(425 + middle.y) / 2 },
            { (100 + middle.x) / 2,(325 + middle.y) / 2 },
            { (100 + middle.x) / 2,(175 + middle.y) / 2 },
            { (250 + middle.x) / 2,( 75 + middle.y) / 2 }
        };
    geksaDraw(smallGeks,"Line",p);



    p.end();

    QLabel *l = new QLabel();
    l->setFixedHeight(500);
    l->setFixedWidth(500);
    l->setPicture(pi);
    l->show();


}
