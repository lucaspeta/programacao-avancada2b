#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> conjunto;

    conjunto.insert(1234);    
    conjunto.insert(9999); 
    conjunto.insert(9876);

    int get_out = 0;

    do{
        int n;

        cout << "Digite o numero: ";
        cin >> n;

        if(conjunto.find(n) != conjunto.end()) {
            cout << "Acesso concedido!" << endl;
            get_out = 0;
        } else {
            cout << "Acesso negado!" << endl;
            get_out++;
        }

    } while(get_out < 2);

    return 0;
}