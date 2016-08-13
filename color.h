#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color
{
    int R, G, B;
public:
    Color();
    Color(int R, int B, int G);
    ~Color();

    void setRGB(int R, int B, int G);
    void getRGB(int colors[]);
};

#endif // COLOR_H
