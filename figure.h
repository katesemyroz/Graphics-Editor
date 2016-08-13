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
public:
    Figure();
    ~Figure();
    virtual void showInfo();
};

#endif // FIGURE_H
