#ifndef OVAL_H
#define OVAL_H

#include "solidfigure.h"

class Oval : protected SolidFigure
{
    Point centrePoint;
    float width, height;
    friend class Controller;
public:
    Oval();
    Oval(Point LeftTopPoint, Point RightBottomPoint);
    Oval(float leftTopX, float leftTopY, float rightBottomX, float rightBottomY);
    ~Oval();

    void calculateCentrePoint();
    void calculateWidth();
    void calculateHeight();

    void showInfo();
};

#endif // OVAL_H
