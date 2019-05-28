#ifndef _PILHA_STRING_H_
#define _PILHA_STRING_H_

#define PILHA_MAX 100

#include <iostream>
#include <string>
using namespace std;

class Pilha{
	public:
		// construtor
		Pilha(int tamanho = PILHA_MAX) : _tamanho(tamanho){
			_topo = -1;
			_item = new string[tamanho];
		}
		
		int getTopo(){
			return _topo;
		}
		
		string getItem(int i){
			return _item[i];
		}
		
		// destrutor
		~Pilha(){
		}
						
		// retorna o tamanho da pilha
		int tamanho1(){
			return _tamanho;
		}
		
		// retorna se a pilha está vazia
		bool taVazia(){
			if(_topo == -1){ return true; } else{ return false; }
		}
		
		// retorna se a pilha esta cheia
		bool taCheia(){
			if(_topo == _tamanho - 1) { return true; } else{ return false; }			 
		}
		
		// inseri elementos em PILHA
		void empilha(string x) {    		
			if(x.compare("") != 0){
				if(!taCheia()){
					_item[++_topo] = x;
				}
				else{
					throw PilhaCheiaException();
				}				
			}
			else{
				throw StringVaziaException();
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
			
			for(int i = 0; i < getTopo(); ++i){
				cout << "ITEM[" << i << "] -> " << getItem(i) << endl;
			}
			
			cout << "______________FIM______________" << endl;
		}		
		
		void operator+=(string s){
			empilha(s);
		}
		
		string operator--(){
			desempilha();
		}
		
		friend ostream& operator<<(ostream &os, Pilha &p);
		
		friend istream& operator>>(istream &is, Pilha &p);
				
	// atts	
	private:
		int _topo;
		int _tamanho;
  		string* _item;
};

istream& operator>>(istream &is, Pilha &p){
}

ostream& operator<<(ostream &os, Pilha &p){
	os << "_____________PILHA____________" << endl;
	
		for(int i = 0; i < p.getTopo(); ++i){
			os << "ITEM[" << i << "] -> " << p.getItem(i) << endl;
		}
			
	os << "______________FIM______________" << endl;
}

#endif
