//Ejercicio 6

#ifndef LISTAOPEPILA_H
#define LISTAOPEPILA_H
#include "NodoOpePila.h"

class ListaPila {

private:

    NodoPila* cima;
    int cant;

public:
    ListaPila();
    ~ListaPila();

    void push(int valor);
    int pop();
    int top();
    bool estaVacia();
    int tamano();
};

#endif //EJERCICIOSLISTAS_LISTAOPEPILA_H
