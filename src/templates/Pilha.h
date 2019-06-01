#ifndef _PILHA_H_
#define _PILHA_H_

#define PILHA_MAX 100

#include <iostream>
#include <string>
using namespace std;

template<class T>
class Pilha{
	public:
		// construtor
		Pilha(int tamanho = PILHA_MAX) : _tamanho(tamanho){
			_topo = -1;
			_item = new T[tamanho];
		}
		
		int getTopo(){
			return _topo;
		}
		
		T getItem(int i){
			return _item[i];
		}
		
		// destrutor
		~Pilha(){
		}
						
		// retorna o tamanho da pilha
		int tamanho1(){
			return _tamanho;
		}
		
		// retorna se a pilha est� vazia
		bool taVazia(){
			if(_topo == -1){ return true; } else{ return false; }
		}
		
		// retorna se a pilha esta cheia
		bool taCheia(){
			if(_topo == _tamanho - 1) { return true; } else{ return false; }			 
		}
		
		// inseri elementos em PILHA
		void empilha(T x) {   		
			if(!taCheia()){
				_item[++_topo] = x;
			}
			else{
				throw PilhaCheiaException();
			}						   
		}
		
		// retira elementos de PILHA
		string desempilha() { 
			if(!taVazia()){
				return _item[_topo--];
			}
			else{
				throw PilhaVaziaException();
			}   		   
		}		
		
		// imprime os elementos
		void imprime(){
			cout << "_____________PILHA____________" << endl;
			
			for(int i = 0; i <= getTopo(); ++i){
				cout << "ITEM[" << i << "] -> " << getItem(i) << endl;
			}
			
			cout << "______________FIM______________" << endl;
		}		
		
		void operator+=(T element){
			empilha(element);
		}
		
		T operator--(){
			desempilha();
		}

	// atts	
	private:
		int _topo;
		int _tamanho;
  		T* _item;
};

#endif