#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void imprimeVector(vector<string> v){
    cout << "-----------Vector-de-Compras----------" << endl;
    for(int i = 0; i < v.size(); i++){
        cout << "Compras["<< i << "] => " << v[i] << endl;
    }
    cout << "-------------------------------------\n" << endl;
}

int main(){
    vector<string> vector_compra;

    imprimeVector(vector_compra);

    vector_compra.push_back("ovos");
    vector_compra.push_back("leite");
    vector_compra.push_back("açúcar");
    vector_compra.push_back("chocolate");
    vector_compra.push_back("farinha");

    vector_compra.pop_back();

    imprimeVector(vector_compra);

    vector_compra.push_back("café");

    cout << "Após adicionar o café\n" << endl;

    imprimeVector(vector_compra);

    for(int i = 0; i < vector_compra.size(); i++){
        if(vector_compra[i] == "açúcar"){
            vector_compra[i] = "mel";
        }
    }

    cout << "Após remover o açucar e inserir o mel.\n"<< endl;
    imprimeVector(vector_compra);

    for(int i = 0; i < vector_compra.size(); i++){
        if(vector_compra[i] == "leite"){
            vector_compra.erase(vector_compra.begin() + i);
        }
    }

    cout << "Após remover o leite.\n"<< endl;
    imprimeVector(vector_compra);

    cout << "Após ordenar" << endl;
    sort(vector_compra.begin(), vector_compra.end());
    
    imprimeVector(vector_compra);

    return 0;
}