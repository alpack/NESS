#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

using namespace std;

int main(void) {

    ifstream arquivo("newfile.json");
    /* testei com ofstream e não funciona, salvo para futuros teste */
    // ofstream arquivo;
    // arquivo.open("newfile.json");

    Json::Reader reader;
    Json::Value Player;
    reader.parse(arquivo, Player);

    std::cout << Player << std::endl;

    return 0;
}
