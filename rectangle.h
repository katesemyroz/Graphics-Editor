#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "solidfigure.h"

class Rectangle : protected SolidFigure
{
    Point centrePoint, leftBottomPoint, rightTopPoint;
    float height, width;
public:
    Rectangle();
    Rectangle(Point LeftTopPoint, Point RightBottomPoint);
    Rectangle(float leftTopX, float leftTopY, float rightBottomX, float rightBottomY);
    ~Rectangle();

    void calculateCentrePoint();
    void calculateLeftBottomPoint();
    void calculateRightTopPoint();
    void calculateHeight();
    void calculateWidth();

    void showInfo();
};

#endif // RECTANGLE_H
