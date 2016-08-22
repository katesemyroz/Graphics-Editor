#include "figure.h"
#include <iostream>
using namespace std;

Figure::Figure()
{
    this->typeOfLine = "solid line";
    this->figure_id = count_figures++;
}

Figure::~Figure()
{
}

int Figure::count_figures = 0;

void Figure::showInfo()
{
}

bool Figure::ifPointIsInsideFigure(Point point)
{
}

int Figure::getFigureId()
{
   return this->figure_id;
}
