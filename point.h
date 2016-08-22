#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;


class Point
{
    float x, y;
public:
    Point();
    Point(float x, float y);
    ~Point();

    float get_x(), get_y();
    void set_x(float new_x), set_y(float new_y);
};

#endif // POINT_H
