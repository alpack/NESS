#ifndef SKILLS_H_INCLUDED
#define SKILLS_H_INCLUDED
#include <iostream>
class Skills
{
  public:
    int setSkills(int level, std::string name);
    std::string skill_name;
    int skill_level;
};

int Skills::setSkills(int level, std::string name)
{
    this->skill_level = level;
    this->skill_name = name;
}

#endif // SKILLS_H_INCLUDED