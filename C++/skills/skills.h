#ifndef SKILLS_H_INCLUDED
#define SKILLS_H_INCLUDED

class Skills
{
  public:
    std::string skill_name;
    int skill_level;
    Skills(int level, std::string name);
};

Skills::Skills(int level, std::string name)
{
    skill_level = level;
    skill_name = name;
}

#endif // SKILLS_H_INCLUDED