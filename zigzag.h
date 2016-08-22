#ifndef ZIGZAG_H
#define ZIGZAG_H

#include "nonsolidfigure.h"
#include "controller.h"

class Zigzag : protected NonSolidFigure
{
    Point startPoint, endPoint;
    int stepsNumber;
    friend class Controller;
public:
    Zigzag();
    Zigzag(Point StartPoint, Point EndPoint, int StepsNum);
    Zigzag(float StartPointX, float StartPointY, float EndPointX, float EndPointY, int StepsNum);
    ~Zigzag();

    void calculateAllPoints();

    void showInfo();
};

#endif // ZIGZAG_H
