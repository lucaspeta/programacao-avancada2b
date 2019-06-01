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

        // Getters and Setters
        T getElemento(int i, int j){ return _elementos[i][j]; }
        setElemento(T elemento, int i, int j){ _elementos[i][j] = elemento; }
        int getColNum(){ return _colNum; }
        int getRowNum(){ return _rowNum; }

        bool verificaCompatibilidade(Matriz m2){
            if(getColNum() == m2.getColNum() && getRowNum() == m2.getRowNum()){ 
                return true; 
            }
            else{
                return false;
            } 
        }
        
        void operator+(Matriz m2){
			if(!verificaCompatibilidade(m2)){
                throw MatrizIncompativelException();
            }
            else{
                for(int i = 0; i < getRowNum(); i++){
                    for(int j = 0; j < getColNum(); j++){
                        setElemento(getElemento(i, j) + m2.getElemento(i, j), i, j);
                    }
                }
            }
		}

        void operator-(Matriz m2){
			if(!verificaCompatibilidade(m2)){
                throw MatrizIncompativelException();
            }
            else{
                for(int i = 0; i < getRowNum(); i++){
                    for(int j = 0; j < getColNum(); j++){
                        setElemento(getElemento(i, j) - m2.getElemento(i, j), i, j);
                    }
                }
            }
		}

        void operator*(Matriz m2){
			if(!verificaCompatibilidade(m2)){
                throw MatrizIncompativelException();
            }
            else{
                for(int i = 0; i < getRowNum(); i++){
                    for(int j = 0; j < getColNum(); j++){
                        setElemento(getElemento(i, j) * m2.getElemento(i, j), i, j);
                    }
                }
            }
		}

        void imprime(){
            for(int i = 0; i < _rowNum; i++){
                for(int j = 0; j < _colNum; j++){
                    cout << getElemento(i, j) << " "; 
                }
                cout<<"\n";
            }
            cout<<"\n";
        }
		
		friend istream& operator<<(istream &os, Matriz &m);

	// atts	
	private:
        int _colNum;
        int _rowNum;
        T _elementos[MAX_SIZE][MAX_SIZE];
};


ostream& operator<<(ostream &os, Matriz<int> &m){    
    for(int i = 0; i < m.getRowNum(); i++){
        for(int j = 0; j < m.getColNum(); j++){
            os << m.getElemento(i,j) << " "; 
        }
        os << "\n";
    }
    os<<"\n";
}

#endif