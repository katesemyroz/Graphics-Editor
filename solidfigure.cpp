#include "solidfigure.h"

SolidFigure::SolidFigure()
{
    this->rightBottomPoint.set_x(5);
    this->rightBottomPoint.set_y(5);
    this->colorOfFigure.setRGB(255,255,255);
}

SolidFigure::~SolidFigure()
{
}

bool SolidFigure::ifPointIsInsideFigure(Point point)
{
    bool isPointInside = false;
    float pointX = point.get_x();
    float pointY = point.get_y();
    if (  ( (pointX >= this->leftTopPoint.get_x()) && (pointX <= this->rightBottomPoint.get_x()) ) &&
          ( (pointY >= this->leftTopPoint.get_y()) && (pointY <= this->rightBottomPoint.get_y()) )  )
    {
        isPointInside = true;
    }
    return isPointInside;
}
