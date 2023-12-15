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

void geksaiderMain(std::vector<int> score, int width, int height);
void geksaDraw(std::vector<Point> temp, std::string type, QPainter &instances);
void createOutline(QPainter &p, Point &middleDot, std::vector<Point> &bigGeks, int width, int height);
void createPicture(QPicture &pi, std::vector<Point> &OutlineDots,int width, int height);
void cordConvert(std::vector<int> numbers, std::vector<Point> &cords, Point middle, std::vector<Point> Outliner);
QLabel *createLabel(int x, int y, std::string name, QLabel *owner);

#endif // GEKSAMAIN_H
