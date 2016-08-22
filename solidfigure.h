#ifndef SOLIDFIGURE_H
#define SOLIDFIGURE_H

#include "figure.h"

class SolidFigure : protected Figure
{
protected:
    Point leftTopPoint, rightBottomPoint;
    Color colorOfFigure;
public:
    bool ifPointIsInsideFigure(Point point);
    SolidFigure();
    ~SolidFigure();
};

#endif // SOLIDFIGURE_H
