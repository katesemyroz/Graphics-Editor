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

    //void deleteFigure();
    //void deleteAllFigures();

    Figure* getFigure(int NumberOfFigure);
    void changeCurrentFigure(int NumberOfFigure);

    void showCurrentFigureInfo();
    void showFigureInfo(int NumberOfFigure);
    void showAllFiguresInfo();

    void ifPointIsInsideFigure();
};

#endif // CONTROLLER_H
