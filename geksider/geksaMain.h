#ifndef GEKSAMAIN_H
#define GEKSAMAIN_H

#include <QApplication>
#include <QtWidgets>
#include <QPainter>
#include <QtMath>
#include <vector>

struct Point
{
    int x;
    int y;
};

void geksaiderMain(std::vector<int> score);
void geksaDraw(std::vector<Point> temp, std::string type, QPainter &instances);
void createOutline(QPainter &p, Point &middleDot, std::vector<Point> &bigGeks);
void createPicture(QPicture &pi, std::vector<Point> &OutlineDots);
void cordConvert(std::vector<int> numbers, std::vector<Point> &cords, Point middle, std::vector<Point> Outliner);

#endif // GEKSAMAIN_H
