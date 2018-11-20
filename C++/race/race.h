#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED
#include <iostream>

class Race
{
  public:
    std::string raceName;
    int setRace(int tp);
};

int Race::setRace(int tp)
{

    if (tp == 1)
    {
        this->raceName = "Humano";
    }
    else if (tp == 2)
    {
        this->raceName = "Tron";
    }
    else if (tp == 3)
    {
        this->raceName = "Automato";
    }
    else if (tp == 4)
    {
        this->raceName = "Android";
    }
    else if (tp == 5)
    {
        this->raceName = "Ciborg";
    }
    else if (tp == 6)
    {
        this->raceName = "I.A";
    }
    else if (tp == 7)
    {
        this->raceName = "Alien";
    }
    else if (tp == 8)
    {
        this->raceName = "Metamorfo";
    }
    else if (tp == 9)
    {
        this->raceName = "Jumpers";
    }
    else if (tp == 10)
    {
        this->raceName = "Kleber";
    }
}

#endif //RACE_H_INCLUDED