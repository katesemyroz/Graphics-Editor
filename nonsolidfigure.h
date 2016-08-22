#ifndef NONSOLIDFIGURE_H
#define NONSOLIDFIGURE_H

#include "figure.h"

class NonSolidFigure : public Figure
{
protected:
    QVector <Point> points;
public:
    bool ifPointIsInsideFigure(Point point);
    NonSolidFigure();
    ~NonSolidFigure();
};

#endif // NONSOLIDFIGURE_H
