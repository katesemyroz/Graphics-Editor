#include "rectangle.h"

Rectangle::Rectangle()
{
    this->calculateLeftBottomPoint();
    this->calculateRightTopPoint();
    this->calculateCentrePoint();
}

Rectangle::Rectangle(Point LeftTopPoint, Point RightBottomPoint)
{
    this->leftTopPoint = LeftTopPoint;
    this->rightBottomPoint = RightBottomPoint;
    this->calculateLeftBottomPoint();
    this->calculateRightTopPoint();
    this->calculateCentrePoint();
}

Rectangle::Rectangle(float leftTopX, float leftTopY, float rightBottomX, float rightBottomY)
{
    this->leftTopPoint.set_x(leftTopX);
    this->leftTopPoint.set_y(leftTopY);
    this->rightBottomPoint.set_x(rightBottomX);
    this->rightBottomPoint.set_y(rightBottomY);
    this->calculateLeftBottomPoint();
    this->calculateRightTopPoint();
    this->calculateCentrePoint();
}

Rectangle::~Rectangle()
{
}

//----------------------------------------------------------------------

void Rectangle::calculateCentrePoint()
{
    this->calculateWidth();
    float centre_x = this->leftTopPoint.get_x() + width/2;
    this->centrePoint.set_x(centre_x);
    this->calculateHeight();
    float centre_y = this->leftTopPoint.get_y() + this->height/2;
    this->centrePoint.set_y(centre_y);
}

void Rectangle::calculateLeftBottomPoint()
{
    this->leftBottomPoint.set_x(this->leftTopPoint.get_x());
    this->leftBottomPoint.set_y(this->rightBottomPoint.get_y());
}

void Rectangle::calculateRightTopPoint()
{
    this->rightTopPoint.set_x(this->rightBottomPoint.get_x());
    this->rightTopPoint.set_y(this->leftTopPoint.get_y());
}

void Rectangle::calculateHeight()
{
    this->height = this->rightBottomPoint.get_y() - this->leftTopPoint.get_y();
}

void Rectangle::calculateWidth()
{
    this->width = this->rightBottomPoint.get_x() - this->leftTopPoint.get_x();
}

//-------------------------------------------------------------------

void Rectangle::showInfo()
{
    cout<<"This is rectangle."<<endl;
    cout<<"Coordinates of left top point: x - " << this->leftTopPoint.get_x()<<", y - "<<this->leftTopPoint.get_y()<<endl;
    cout<<"Coordinates of right top point: x - " << this->rightTopPoint.get_x()<<", y - "<<this->rightTopPoint.get_y()<<endl;
    cout<<"Coordinates of right bottom point: x - " << this->rightBottomPoint.get_x()<<", y - "<<this->rightBottomPoint.get_y()<<endl;
    cout<<"Coordinates of left bottom point: x - " << this->leftBottomPoint.get_x()<<", y - "<<this->leftBottomPoint.get_y()<<endl;
    cout<<"Coordinates of centre point: x - " << this->centrePoint.get_x()<<", y - "<<this->centrePoint.get_y()<<endl;
    cout<<"Width of figure is "<<this->width<<endl;
    cout<<"Height of figure is "<<this->height<<endl;
    cout<<"Figure id is: "<<this->figure_id<<endl<<endl;
}
