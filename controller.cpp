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

Figure* Controller::getFigure(int FigureId)
{
    Figure *p;
    bool found = false;
    for (int a = 0; a < all_figures.size(); a++)
    {
        p = all_figures[a];
        if (p->getFigureId() == FigureId)
        {
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout<<"There is no figure with id "<<FigureId<<endl;
        p = NULL;
    }
    return p;
}

void Controller::changeCurrentFigure(int FigureId)
{
    Figure *p = getFigure(FigureId);
    currentFigure = p;
}

void Controller::showCurrentFigureInfo()
{
    this->currentFigure->showInfo();
}

void Controller::showFigureInfo(int FigureId)
{
    Figure *p = getFigure(FigureId);
    p->showInfo();
}

void Controller::showAllFiguresInfo()
{
    for (int a = 0; a < all_figures.size(); a++)
    {
        all_figures[a]->showInfo();
    }
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
