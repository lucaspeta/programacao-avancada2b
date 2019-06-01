#ifndef _MATRIZ_H_
#define _MATRIZ_H_

#define MAX_SIZE 20

#include <string>
using namespace std;

template<class T>
class Matriz{
	public:
		// construtor
		Matriz(int colNum = 1, int rowNum = 1) : _colNum(colNum), _rowNum(rowNum) {
            for(int i = 0; i < rowNum; i++){
                for(int j = 0; j < colNum; j++){
                    setElemento(0, i, j);
                }
            }
		}
			
        ~Matriz(){}

        setElemento(T elemento, int i, int j){ _elementos[i][j] = elemento; }
        T getELemento(int i, int j){ return _elementos[i][j]; }

        void imprime(){
            for(int i = 0; i < _rowNum; i++){
                for(int j = 0; j < _colNum; j++){
                    cout << getELemento(i, j) << " "; 
                }
                cout<<"\n";
            }
            cout<<"\n";
        }

	// atts	
	private:
        int _colNum;
        int _rowNum;
        T _elementos[MAX_SIZE][MAX_SIZE];
};
#endif