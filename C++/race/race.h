#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED

class Race
{
  public:
    std::string name;
    Race(int tp);
};

Race::Race(int tp)
{

    if (tp == 1)
    {
        name = "Humano";
    }
    else if (tp == 2)
    {
        name = "Tron";
    }
    else if (tp == 3)
    {
        name = "Automato";
    }
    else if (tp == 4)
    {
        name = "Android";
    }
    else if (tp == 5)
    {
        name = "Ciborg";
    }
    else if (tp == 6)
    {
        name = "I.A";
    }
    else if (tp == 7)
    {
        name = "Alien";
    }
    else if (tp == 8)
    {
        name = "Metamorfo";
    }
    else if (tp == 9)
    {
        name = "Jumpers";
    }
}

#endif //RACE_H_INCLUDED