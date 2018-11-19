#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

using namespace std;

int main(void) {

    char meuArray[] = "nomeplayer";
    std::FILE *arquivo = std::fopen("newfile.json", "a");
    // std::ofstream filename;

    Json::Value event;
    Json::Value vec(Json::arrayValue);
    vec.append(Json::Value(1));
    vec.append(Json::Value(2));
    vec.append(Json::Value(3));

    event["player"]["id"] = meuArray;
    event["player"]["habilidades"]["arduino"] = 5;
    event["player"]["habilidades"]["phs"] = 3;

    std::fwrite(event, sizeof(vec), vec.size(), arquivo);
    std::cout << event << std::endl;

    return 0;
}
