#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

using namespace std;

int main(void) {

    char meuArray[] = "nomeplayer";
    //std::ofstream arquivo;
    std::FILE *arquivo = std::fopen("newfile.json", "a");
    //arquivo.open("newfile.json");

    Json::Value Player;
    Json::Value Habilidades;

    Habilidades["arduino"] = 3;
    Habilidades["photoshop"] = 5;
    Player["Player"]["Nome"] = "nomedoplayer";
    Player["Player"]["Habilidades"] = Habilidades;

    std::fwrite(&Player, sizeof(Json::Value), sizeof(Player), arquivo);
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
