//Ejercicio 1

#ifndef LISTAENTEROS_H
#define LISTAENTEROS_H

#include "NodoEnteroB.h"
#include <string>

using namespace std;

class ListaEnterosB {

private:

    NodoEnteroB* primero;
    NodoEnteroB* ultimo;
    int cantidad;

public:
    ListaEnterosB();
    ~ListaEnterosB();

    bool vacia();
    void agregarInicio(int valor);
    void agregarFinal(int valor);
    bool eliminaInicio();
    bool eliminaFinal();
    int getCantidad();
    string toString();
};

#endif //EJERCICIOSLISTAS_LISTAENTEROB_H
