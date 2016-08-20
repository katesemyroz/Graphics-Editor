#include "oval.h"

Oval::Oval()
{
    this->calculateCentrePoint();
}

Oval::Oval(Point LeftTopPoint, Point RightBottomPoint)
{
    this->leftTopPoint = LeftTopPoint;
    this->rightBottomPoint = RightBottomPoint;
    this->calculateCentrePoint();
}

Oval::Oval(float leftTopX, float leftTopY, float rightBottomX, float rightBottomY)
{
    this->leftTopPoint.set_x(leftTopX);
    this->leftTopPoint.set_y(leftTopY);
    this->rightBottomPoint.set_x(rightBottomX);
    this->rightBottomPoint.set_y(rightBottomY);
    this->calculateCentrePoint();
}

Oval::~Oval()
{
}

//-------------------------------------------------

void Oval::calculateCentrePoint()
{
    this->calculateWidth();
    float centre_x = this->leftTopPoint.get_x() + width/2;
    this->centrePoint.set_x(centre_x);
    this->calculateHeight();
    float centre_y = this->leftTopPoint.get_y() + this->height/2;
    this->centrePoint.set_y(centre_y);
}

void Oval::calculateHeight()
{
    this->height = this->rightBottomPoint.get_y() - this->leftTopPoint.get_y();
}

void Oval::calculateWidth()
{
    this->width = this->rightBottomPoint.get_x() - this->leftTopPoint.get_x();
}

//-------------------------------------------------------------------

void Oval::showInfo()
{
    cout<<"This is oval."<<endl;
    cout<<"Coordinates of left top point: x - " << this->leftTopPoint.get_x()<<", y - "<<this->leftTopPoint.get_y()<<endl;
    cout<<"Coordinates of right bottom point: x - " << this->rightBottomPoint.get_x()<<", y - "<<this->rightBottomPoint.get_y()<<endl;
    cout<<"Coordinates of centre point: x - " << this->centrePoint.get_x()<<", y - "<<this->centrePoint.get_y()<<endl;
    cout<<"Figure id is: "<<this->figure_id<<endl<<endl;
}
