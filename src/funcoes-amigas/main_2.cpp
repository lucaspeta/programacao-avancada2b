#include <iostream>
#include "../excecoes/Excecoes.h"
#include "../sobrecarga/PilhaString.h"

using namespace std;

int main() {
    PilhaString p1;

    p1 += "teste";
    p1 += " de ";
    p1 += "funcoes ";
    p1 += "amigas";

    cout << p1 << endl;

	return 0;
}