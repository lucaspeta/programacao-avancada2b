#include <iostream>
#include "src/excecoes/Excecoes.h"
#include "src/sobrecarga/PilhaString.h"
#include "src/templates/Pilha.h"
#include "src/templates/Matriz.h"

using namespace std;

int main() {
	Matriz<int> M1(3,3);
	
	M1.setElemento(2,0,0);
	M1.setElemento(5,0,1);
	M1.setElemento(3,0,2);
	M1.setElemento(5,1,0);
	M1.setElemento(7,1,1);
	M1.setElemento(5,1,2);
	M1.setElemento(3,2,0);
	M1.setElemento(1,2,1);
	M1.setElemento(2,2,2);
	
	cout << "\n---------- M1 ----------\n" << endl;
	cout << M1;

	Matriz<int> M2(3,3);

	M2.setElemento(5,0,0);
	M2.setElemento(3,0,1);
	M2.setElemento(1,0,2);
	M2.setElemento(5,1,0);
	M2.setElemento(7,1,1);
	M2.setElemento(5,1,2);
	M2.setElemento(3,2,0);
	M2.setElemento(1,2,1);
	M2.setElemento(7,2,2);

	cout << "\n---------- M2 ----------\n" << endl;
	cout << M2;

	// Soma entre matrizes
	try{
		M1 + M2;
	} catch(MatrizIncompativelException &ex){
		ex.what();
	}

	cout << "\n---------------- M1 + M2 -------------\n" << endl;
	cout << M1;

	// Subtracao entre matrizes
	try{
		M1 - M2;
	} catch(MatrizIncompativelException &ex){
		ex.what();
	}

	cout << "\n---------------- M1 - M2 -------------\n" << endl;
	cout << M1;
	
	Matriz<int> M3(2,2);

	M3.setElemento(5,0,0);
	M3.setElemento(4,0,1);
	M3.setElemento(1,1,0);
	M3.setElemento(2,1,1);

	cout << "\n---------- M3 ----------\n" << endl;
	cout << M3;

	Matriz<int> M4(2,2);

	M4.setElemento(8,0,0);
	M4.setElemento(7,0,1);
	M4.setElemento(3,1,0);
	M4.setElemento(2,1,1);

	cout << "\n---------- M4 ----------\n" << endl;
	cout << M4;

	// Multiplicacao escalar entre matrizes
	try{
		M3 * M4;
	} catch(MatrizIncompativelException &ex){
		ex.what();
	}

	cout << "\n---------------- M3 * M4 -------------\n" << endl;
	cout << M3;

	return 0;
}