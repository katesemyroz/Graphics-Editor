#include "zigzag.h"

Zigzag::Zigzag()
{
    this->stepsNumber = 2;
    this->calculateAllPoints();
}

Zigzag::Zigzag(Point StartPoint, Point EndPoint, int StepsNum)
{
    this->startPoint = StartPoint;
    this->endPoint = EndPoint;
    if (StepsNum < 2)
    {
        cout<<"Minimum value of step number is 2\n";
        this->stepsNumber = 2;
    }
    else
        this->stepsNumber = StepsNum;
    this->calculateAllPoints();
}

Zigzag::Zigzag(float StartPointX, float StartPointY, float EndPointX, float EndPointY, int StepsNum)
{
    this->startPoint.set_x(StartPointX);
    this->startPoint.set_y(StartPointY);
    this->endPoint.set_x(EndPointX);
    this->endPoint.set_y(EndPointY);
    if (StepsNum < 2)
    {
        cout<<"Minimum value of step number is 2\n";
        this->stepsNumber = 2;
    }
    else
        this->stepsNumber = StepsNum;
    this->calculateAllPoints();
}

Zigzag::~Zigzag()
{
}

//--------------------------------------------------------------------------------

void Zigzag::calculateAllPoints()       //данная функция рассчитана только на горизонтальный зигзаг
{
    int numOfSections = this->stepsNumber*2;
    float lengthOfSection = (this->endPoint.get_x() - this->startPoint.get_x())/numOfSections;
    Point firstPoint;
    firstPoint.set_x(this->startPoint.get_x() + lengthOfSection);
    this->points.push_back(firstPoint);
    Point temp;
    for (int i = 1; i < stepsNumber - 1; i++)
    {
       temp.set_x(firstPoint.get_x() + lengthOfSection*2*i);
       if (i%2 != 0)
       {
           temp.set_y(this->startPoint.get_y() + lengthOfSection);
       }
       else
           temp.set_y(this->startPoint.get_y() - lengthOfSection);
       this->points.push_back(temp);
    }
    Point lastPoint;
    lastPoint.set_x(this->endPoint.get_x() - lengthOfSection);
    this->points.push_back(lastPoint);
}

//-------------------------------------------------------------------------------

void Zigzag::showInfo()
{
    cout<<"This is zigzag."<<endl;
    cout<<"Number of steps: " << this->stepsNumber<<endl;
    cout<<"Coordinates of start point: x - " << this->startPoint.get_x()<<", y - "<<this->startPoint.get_y()<<endl;
    for (int i = 1; i <= this->points.size(); i++)
    {
        cout<<"Coordinates of "<<i<<" point: x - "<<this->points[i-1].get_x()<<", y - "<<this->points[i-1].get_y()<<endl;
    }
    cout<<"Coordinates of end point: x - " << this->endPoint.get_x()<<", y - "<<this->endPoint.get_y()<<endl;
    cout<<"Figure id is: "<<this->figure_id<<endl<<endl;
}
