#ifndef USERS_H_INCLUDED
#define USERS_H_INCLUDED
#include "../race/race.h"
#include "../skills/skills.h"

class Users : public Race, public Skills 
{
  public:
    Skills array[];
  private:
    std::string password;
    std::string name;
    std::string email;
    int telefone;
};

#endif // USERS_H_INCLUDED

