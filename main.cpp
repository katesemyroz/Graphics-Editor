#include <QCoreApplication>
#include "rectangle.h"
#include "oval.h"
#include "zigzag.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Rectangle q1, q2(12,23,15,47);
    q1.showInfo();
    q2.showInfo();

    Oval w1,w2(22,45,44,70);
    w1.showInfo();
    w2.showInfo();

    Zigzag e1(0,10,40,10,4);
    e1.showInfo();

    return a.exec();
}
