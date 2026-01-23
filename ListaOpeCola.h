//Ejercicio 7

#ifndef LISTAOPECOLA_H
#define LISTAOPECOLA_H

#include "NodoOpeCola.h"

class ListaCola {

private:

    NodoCola* primero;
    NodoCola* ultimo;
    int cant;

public:
    ListaCola();
    ~ListaCola();

    void encolar(int valor);
    int desencolar();
    int frente();
    bool estaVacia();
    int tamano();
};

#endif //EJERCICIOSLISTAS_LISTAOPECOLA_H
