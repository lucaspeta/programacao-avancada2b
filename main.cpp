#include <iostream>
#include "src/excecoes/Excecoes.h"
#include "src/sobrecarga/PilhaString.h"
#include "src/templates/Pilha.h"
#include "src/templates/Matriz.h"

using namespace std;

int main() {
	Matriz<int> M(3,3);
	
	M.setElemento(2,0,0);
	M.setElemento(5,0,1);
	M.setElemento(3,0,2);
	M.setElemento(5,1,0);
	M.setElemento(7,1,1);
	M.setElemento(5,1,2);
	M.setElemento(3,2,0);
	M.setElemento(1,2,1);
	M.setElemento(2,2,2);
	
	M.imprime();

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

	M2.imprime();

	return 0;
}