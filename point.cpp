#include "point.h"

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(float x, float y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
}

float Point::get_x()
{
    return this->x;
}

float Point::get_y()
{
    return this->y;
}

void Point::set_x(float new_x)
{
    this->x = new_x;
}

void Point::set_y(float new_y)
{
    this->y = new_y;
}
