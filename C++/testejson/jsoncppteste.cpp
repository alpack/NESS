/* codigo exemplo para criar json */
#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

using namespace std;

int main(void)
{
	char meuArray[] = "nomeplayer";
	ofstream arquivo;
	arquivo.open("newfile.json", ios::in | ios::out | ios::app);

	Json::Value Player;
	Json::Value Id;
	Json::Value Habilidades;

	Habilidades["arduino"] = 3;
	Habilidades["photoshop"] = 5;
	Id["Player"]["Nome"] = "pedro";
	Id["Player"]["Habilidades"] = Habilidades;
	Player["player"] = Id;

	arquivo << Player;
	cout << Player << endl;

	return 0;
}

