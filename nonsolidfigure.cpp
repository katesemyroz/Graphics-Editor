#include "nonsolidfigure.h"

NonSolidFigure::NonSolidFigure()
{
}

NonSolidFigure::~NonSolidFigure()
{
}

bool NonSolidFigure::ifPointIsInsideFigure(Point point)
{
    bool isPointInside = false;
    float pointX = point.get_x();
    float pointY = point.get_y();
    for (int i = 0; i < this->points.size(); i++)
    {
        if (  (pointX == points[i].get_x()) && (pointY == points[i].get_y())  )
            isPointInside = true;
    }
    /*if (pointIsInside)
        cout<<"point is inside figure\n";
    else
        cout<<"Point is outside the figure\n";*/
    return isPointInside;
}
