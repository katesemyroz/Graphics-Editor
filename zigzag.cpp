#include "zigzag.h"

Zigzag::Zigzag()
{
    this->startPoint.set_x(0);
    this->startPoint.set_y(5);
    this->endPoint.set_x(10);
    this->endPoint.set_y(5);
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

void Zigzag::calculateAllPoints()       //данная функция рассчитана только на горизонтальный зигзаг,
                                        //координаты y последней точки перед конечной точкой считаются неправильно(должен быть +-, а не просто -)
{
    this->points.push_back(this->startPoint);

    int numOfSections = this->stepsNumber*2;
    float lengthOfSection = (this->endPoint.get_x() - this->startPoint.get_x())/numOfSections;
    Point firstPointAfterStartPoint;
    firstPointAfterStartPoint.set_x(this->startPoint.get_x() + lengthOfSection);
    firstPointAfterStartPoint.set_y(this->startPoint.get_y() - lengthOfSection);
    this->points.push_back(firstPointAfterStartPoint);
    for (int i = 1; i < stepsNumber - 1; i++)
    {
       Point temp;
       temp.set_x(firstPointAfterStartPoint.get_x() + lengthOfSection*2*i);
       if (i%2 != 0)
           temp.set_y(this->startPoint.get_y() + lengthOfSection);
       else if (i%2 == 0)
           temp.set_y(this->startPoint.get_y() - lengthOfSection);
       this->points.push_back(temp);
    }
    Point lastPointBeforeEndPoint;
    lastPointBeforeEndPoint.set_x(this->endPoint.get_x() - lengthOfSection);
    lastPointBeforeEndPoint.set_y(this->startPoint.get_y() + lengthOfSection);
    this->points.push_back(lastPointBeforeEndPoint);

    this->points.push_back(this->endPoint);
}

//-------------------------------------------------------------------------------

void Zigzag::showInfo()
{
    cout<<"This is zigzag."<<endl;
    cout<<"Number of steps: " << this->stepsNumber<<endl;
    for (int i = 1; i <= this->points.size(); i++)
    {
        cout<<"Coordinates of "<<i<<" point: x - "<<this->points[i-1].get_x()<<", y - "<<this->points[i-1].get_y()<<endl;
    }
    cout<<"Figure id is: "<<this->figure_id<<endl<<endl;
}
