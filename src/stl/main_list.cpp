#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;
list<string>::iterator it;

void imprimeLista(list<string> l){
    cout << "-----------Lista-de-Compras----------" << endl;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    cout << "-------------------------------------\n" << endl;
}

int main(){
    list<string> list_compra;
    
    list_compra.push_back("ovos");
    list_compra.push_back("leite");
    list_compra.push_back("açúcar");
    list_compra.push_back("chocolate");
    list_compra.push_back("farinha");

    list_compra.pop_back();

    imprimeLista(list_compra);

    list_compra.push_back("café");

    cout << "Após adicionar o café.\n" << endl;    
    imprimeLista(list_compra);

    for (it = list_compra.begin(); it != list_compra.end(); it++) {
        if(*it == "açúcar"){
            *it = "mel";
        }
    }

    cout << "Após remover o açucar e inserir o mel.\n"<< endl;    
    imprimeLista(list_compra);

    cout << "Após ordenar" << endl;
    list_compra.sort(greater<string>());

    imprimeLista(list_compra);


    for (it = list_compra.begin(); it != list_compra.end(); it++) {
        if(*it == "leite"){
            list_compra.erase(it);
        }
    }

    cout << "Após remover o leite.\n"<< endl;
    imprimeLista(list_compra);

    return 0;
}