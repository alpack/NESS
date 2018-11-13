#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED
#include <iostream>

class Race
{
  public:
    std::string name;
    int setRace(int tp);
};

int Race::setRace(int tp)
{

    if (tp == 1)
    {
        this->name = "Humano";
    }
    else if (tp == 2)
    {
        this->name = "Tron";
    }
    else if (tp == 3)
    {
        this->name = "Automato";
    }
    else if (tp == 4)
    {
        this->name = "Android";
    }
    else if (tp == 5)
    {
        this->name = "Ciborg";
    }
    else if (tp == 6)
    {
        this->name = "I.A";
    }
    else if (tp == 7)
    {
        this->name = "Alien";
    }
    else if (tp == 8)
    {
        this->name = "Metamorfo";
    }
    else if (tp == 9)
    {
        this->name = "Jumpers";
    }
    else if (tp == 10)
    {
        this->name = "Kleber";
    }
}

#endif //RACE_H_INCLUDED