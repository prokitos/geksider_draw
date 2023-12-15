#ifndef GEKSAMAIN_H
#define GEKSAMAIN_H

#include <QApplication>
#include <QtWidgets>
#include <QPainter>
#include <QtMath>
#include <vector>
#include <cmath>

struct Point
{
    int x;
    int y;
};

void geksaiderMain(std::vector<int> score, int angleCount, int width, int height);
void geksaDraw(std::vector<Point> &temp, std::string type, QPainter &instances);
void createOutline(QPainter &p, Point &middleDot, std::vector<Point> &bigGeks, int width, int height, int angleCount);
void createPicture(QPicture &pi, std::vector<Point> &OutlineDots,int width, int height);
void cordConvert(std::vector<int> numbers, std::vector<Point> &cords, Point middle, std::vector<Point> Outliner);
QLabel *createLabel(int x, int y, std::string name, QLabel *owner);
int searchX(int angle, int lineXLen, int middle);
int searchY(int angle, int lineYLen, int middle);

#endif // GEKSAMAIN_H
