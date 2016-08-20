#include <QCoreApplication>
#include "controller.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Controller c;
    c.menu();


    return a.exec();
}
