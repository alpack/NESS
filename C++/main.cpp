#include <iostream>
#include "../C++/users/users.h"

using namespace std;

int main()
{
    string name, senha, email, skillName;
    int skillLevel, phoneNumber, choice, skill;
    Users *user1;

    cout << "Me informe o nome: ";
    cin >> name;
    cout << "Me informe a senha: ";
    cin >> senha;
    cout << "Me informe o email: ";
    cin >> email;

    cout << "Escolha sua classe:\n"
         << "1 -> Humano\n2 -> Tron\n3 -> Automato\n4 -> Andorid\n5 -> Ciobrg\n6 -> I.A\n7 -> Alien\n8 -> Metamorfo\n9 -> Jumpers\n";
    cin >> choice;

    cout << "Deseja adicionar uma skill (S-> 1 | N-> 0):";
    cin >> skill;

    user1 = new Users(name, senha, email, 1234);
    user1->setRace(choice);

    if (skill = 1)
    {
        cout << "Me informe a skill: ";
        cin >> skillName;
        cout << "Me informe o nivel da skill: ";
        cin >> skillLevel;
        user1->skill_name = skillName;
        user1->skill_level = skillLevel;
    }

    user1->imp();

    
    return 0;
}