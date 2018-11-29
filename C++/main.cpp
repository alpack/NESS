#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>
#include "../C++/users/users.h"

using namespace std;

int main()
{
    string name, senha, email, skillName;
    int skillLevel, phoneNumber, choice, skill;
    Users *user1;

    ofstream arquivo;
    arquivo.open("json/user.json");

    Json::Value Player;
    Json::Value Habilidades;

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

    Habilidades[user1->skill_name] = skillLevel;
    Player["User5"]["Habilidades"] = Habilidades;
    Player["User5"]["Classe"] = user1->raceName;
    Player["User5"]["Descricao"] = "";
    Player["User5"]["Nome"] = user1->name;

    arquivo << Player;

    user1->imp();

    return 0;
}