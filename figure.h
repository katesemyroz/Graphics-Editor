#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
#include "color.h"
#include <QVector>
#include <QString>
#include <iostream>
using namespace std;

class Figure
{
protected:
     Color colorOfLine;
     QString typeOfLine;
     static int count_figures;
     int figure_id;
public:
    Figure();
    ~Figure();
    virtual void showInfo();
    virtual bool ifPointIsInsideFigure(Point point);
    int getFigureId();
};

#endif // FIGURE_H
