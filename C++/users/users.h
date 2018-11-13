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
  int setSkills(int level, std::string name);

  void imp();

private:
  std::string password;
  std::string name;
  std::string email;
  int telefone;
};

Users::Users(std::string name, std::string password, std::string email, int phoneNumber)
{
  this->telefone = phoneNumber;
  this->password = password;
  this->name = name;
  this->email = email;
}

void Users::imp()
{
  std::cout << "Nome: " << name << "\n";
  std::cout << "email: " << email << "\n";
  std::cout << "telefone: " << telefone << "\n";
  std::cout << "senha: " << password << "\n";
  std::cout << "skills: " << skill_name << "\n";
  std::cout << "skill level: " << skill_level << "\n";
}
#endif // USERS_H_INCLUDED
