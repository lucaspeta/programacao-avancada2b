#ifndef  _EXCECOES_H_
#define  _EXCECOES_H_

#include <exception>
using namespace std;

class PilhaCheiaException: public exception {
public:
    virtual const char* what() {
        return "Não é possivel inserir. A pilha está cheia!";
    }
};

class PilhaVaziaException: public exception {
public:
    virtual const char* what() {
        return "Não é possivel remover. A pilha está vazia!";
    }
};

class StringVaziaException: public exception {
public:
    virtual const char* what() {
        return "Não é possivel inserir elementos nulos na pilha!";
    }
};

#endif
