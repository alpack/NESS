/* codigo exemplo para criar json */
/* quando compilar adicionar -ljsoncpp ao final */
#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

using namespace std;

int main(void) {

    char meuArray[20];
    printf("nome do player: ");
    scanf("%s", meuArray);
    ofstream arquivo;
    arquivo.open("newfile.json");    // ifstream arquivo("newfile.json");    // ifstream arquivo("newfile.json");

    Json::Value Player;
    Json::Value Habilidades;

    Habilidades["arduino"] = 3;
    Habilidades["photoshop"] = 5;
    Player["Player"]["Nome"] = meuArray;
    Player["Player"]["Habilidades"] = Habilidades;

    arquivo << Player;
    // std::fwrite(&Player, sizeof(Json::Value), sizeof(Player), arquivo);
    std::cout << Player << std::endl;
    //arquivo.close();

    return 0;
}

/*
void main() {
  std::ofstream file_id;
  op_file_id.open("file.txt");
  Json::Value value_obj; //populate 'value_obj' with the objects, arrays etc. Json::StyledWriter styledWriter; file_id << styledWriter.write(value_obj);
  file_id.close();
}
*/
