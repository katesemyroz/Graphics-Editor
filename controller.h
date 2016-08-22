#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "figure.h"
#include "oval.h"
#include "rectangle.h"
#include "zigzag.h"
#include <QVector>
#include <iostream>
using namespace std;

class Controller
{
    QVector <Figure*> all_figures;
    Figure *currentFigure;
public:
    Controller();

    void menu();
    void addFigure();

    void deleteCurrentFigure();
    void deleteFigure(int serialNumberInVector);
    void deleteAllFigures();

    void getFigure(int NumberOfFigure);
    void getFigure(Point point);

    void showCurrentFigureInfo();
    void showFigureInfo(int NumberOfFigure);
    void showAllFiguresInfo();

    bool ifPointIsInsideFigure(Point point);
};

#endif // CONTROLLER_H
