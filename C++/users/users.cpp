#include <iostream>
#include "users.h"

using namespace std;

int main()
{
    string name, senha, email, skillName;
    int skillLevel, phoneNumber;

    cout << "Me informe o nome: ";
    cin >> name;
    cout << "Me informe a senha: ";
    cin >> senha;
    cout << "Me informe o email: ";
    cin >> email;

    cout << "Me informe a skill: ";
    cin >> skillName;
    cout << "Me informe o nivel da skill: ";
    cin >> skillLevel;
    Users *user1 = new Users(name, senha, email, 1234);
    user1->skill_name = skillName;
    user1->skill_level = skillLevel;
    user1->imp();
    return 0;
}