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

void geksaiderMain();
void geksaDraw(std::vector<Point> temp, std::string type, QPainter &instances);

#endif // GEKSAMAIN_H
