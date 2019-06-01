#ifndef  _EXCECOES_H_
#define  _EXCECOES_H_

#include <exception>
using namespace std;

class PilhaCheiaException: public exception {
public:
    virtual const char* what() {
        return "Nao eh possivel inserir. A pilha esta cheia!";
    }
};

class PilhaVaziaException: public exception {
public:
    virtual const char* what() {
        return "Nao eh possivel remover. A pilha esta vazia!";
    }
};

class StringVaziaException: public exception {
public:
    virtual const char* what() {
        return "Nao eh possivel inserir elementos nulos na pilha!";
    }
};

#endif
