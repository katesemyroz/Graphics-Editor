#include "color.h"

Color::Color()      //(0,0,0) - black color, (0,0,0) - white color
{
    this->R = 0;
    this->B = 0;
    this->G = 0;
}

Color::Color(int R, int B, int G)
{
    this->R = R;
    this->B = B;
    this->G = G;
}

void Color::setRGB(int new_R, int new_B, int new_G)
{
    this->R = new_R;
    this->B = new_B;
    this->G = new_G;
}

Color::~Color()
{
}

void Color::getRGB(int colors[])
{
    colors[0] = this->R;
    colors[1] = this->B;
    colors[2] = this->G;
}
