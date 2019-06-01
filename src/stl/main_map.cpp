#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, string> cores;

    if(cores.size() == 0)
        cout << "Cores esta vazio! \n" << endl;

    cores["Vermelho"]    = "0xFF0000";
    cores["Azul"]        = "0x4682B4";
    cores["Ouro"]        = "0xFFD700";
    cores["Branco"]      = "0xFFFFFF";
    cores["Cinza"]       = "0xDCDCDC";
    cores["Verde"]       = "0x48832F";
    cores["Roxo"]        = "0x5C0070";
    cores["Verde claro"] = "0x69BF00";

    for (auto mit = cores.begin(); mit != cores.end(); mit++) {
        cout << "chave: " << (*mit).first  << endl;
        cout << "valor: " << (*mit).second << "\n" << endl;
    }

    cores.find("Rosa");

    return 0;
}