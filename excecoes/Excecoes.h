#ifndef  _EXCECOES_H_
#define  _EXCECOES_H_

#include <exception>
using namespace std;

class PilhaCheiaException: public exception {
public:
    virtual const char* what() {
        return "N�o � possivel inserir. A pilha est� cheia!";
    }
};

class PilhaVaziaException: public exception {
public:
    virtual const char* what() {
        return "N�o � possivel remover. A pilha est� vazia!";
    }
};

class StringVaziaException: public exception {
public:
    virtual const char* what() {
        return "N�o � possivel inserir elementos nulos na pilha!";
    }
};

#endif
