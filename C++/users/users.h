#ifndef USERS_H_INCLUDED
#define USERS_H_INCLUDED
#include "../race/race.h"
#include "../skills/skills.h"
#include <iostream>

class Users : public Race, public Skills
{
  public:
    Skills array;
    Users(std::string name, std::string password, std::string email, int phoneNumber);
    void imp();
    std::string description;
  private:
    std::string password;
    std::string name;
    std::string email;
    int telefone;
};

Users::Users(std::string name, std::string password, std::string email, int phoneNumber)
{
    this->telefone = 0;
    this->password = password;
    this->name = name;
    this->email = email;
    this->description = " ";
}

void Users::imp()
{
    std::cout << "Nome: " << name << "\n";
    std::cout << "email: " << email << "\n";
    std::cout << "telefone: " << telefone << "\n";
    std::cout << "skills: " << skill_name << "\n";
    std::cout << "skill level: " << skill_level << "\n";
    std::cout << "Raça: " << raceName << "\n";
    std::cout << "Descrição: " << description << "\n";
}
#endif // USERS_H_INCLUDED
