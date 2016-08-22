#include "controller.h"

Controller::Controller()
{
}

void Controller::addFigure()
{
    Figure *p;
    cout<<"To add the figure press appropriate button\n";
    cout<<"1. Rectangle\n";
    cout<<"2. Oval\n";
    cout<<"3. Zigzag\n";
    int choise;
    cin>>choise;
    switch(choise)
    {
        case 1:
        {
        p = new Rectangle;
            break;
        }
        case 2:
        {
        p = new Oval;
            break;
        }
        case 3:
        {
        p = new Zigzag;
            break;
        }
        default:
        {
            break;
        }
    }
    this->currentFigure = p;
    all_figures.push_back(p);
}

void Controller::deleteCurrentFigure()
{
    int currentFigureId = currentFigure->getFigureId();
    for (int a = 0; a < all_figures.size(); a++)
    {
        if (all_figures[a]->getFigureId() == currentFigureId)
        {
            all_figures[a]->~Figure();
            all_figures.erase(all_figures.begin() + a);
            break;
        }
    }
    currentFigure = *(all_figures.end() - 1);
}

void Controller::deleteFigure(int serialNumberInVector)
{
    if (&currentFigure == &all_figures[serialNumberInVector - 1])
        currentFigure = *(all_figures.end() - 1);
    all_figures[serialNumberInVector - 1]->~Figure();
    all_figures.erase(all_figures.begin() + serialNumberInVector - 1);
}

void Controller::deleteAllFigures()
{
    int numberOfFigures = all_figures.size();
    if (numberOfFigures > 0)
    {
        for (int i = numberOfFigures - 1; i >= 0; i--)
        {
            all_figures[i]->~Figure();
        }
        all_figures.clear();
    }
    else
        cout<<"List of figures is empty\n";
}

void Controller::getFigure(int FigureId)
{
    for (int a = 0; a < all_figures.size(); a++)
    {
        if (all_figures[a]->getFigureId() == FigureId)
        {
            currentFigure = all_figures[a];
            break;
        }
    }
}

void Controller::getFigure(Point point)
{
    for (int i = 0; i < this->all_figures.size(); i++)
    {
        if (all_figures[i]->ifPointIsInsideFigure(point))
        {
            currentFigure = all_figures[i];
            break;
        }
    }
}

void Controller::showCurrentFigureInfo()
{
    currentFigure->showInfo();
}

void Controller::showFigureInfo(int FigureId)
{
    getFigure(FigureId);
    currentFigure->showInfo();
}

void Controller::showAllFiguresInfo()
{
    for (int a = 0; a < all_figures.size(); a++)
    {
        all_figures[a]->showInfo();
    }
}

bool Controller::ifPointIsInsideFigure(Point point)
{
    return currentFigure->ifPointIsInsideFigure(point);
}

void Controller::menu()
{
    int choise = 0;
    while (choise!=3)
    {
        cout<<"To make some action press appropriate button\n";
        cout<<"1. Create figure\n";
        cout<<"2. Show info\n";
        cout<<"3. Exit\n";
        cin>>choise;
        switch(choise)
        {
            case 1:
            {
            addFigure();
                break;
            }
            case 2:
            {
            showAllFiguresInfo();
                break;
            }
            default:
            {
                break;
            }
        }
    }

}
