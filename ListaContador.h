//Ejercicio 2
#ifndef LISTACONTADOR_H
#define LISTACONTADOR_H

#include "NodoEntero2.h"
#include <string>

using namespace std;

class ListaEnteros2 {

private:

    NodoEntero2* primero;
    NodoEntero2* ultimo;
    int cantidad;

public:
    ListaEnteros2();
    ~ListaEnteros2();

    bool vacia();
    void agregarInicio(int valor);
    void agregarFinal(int valor);
    bool eliminaInicio();
    bool eliminaFinal();
    int getCantidad();
    int obtenerPrimero();
    int obtenerUltimo();
    int sumarElementos();
    double promedio();
    int encontrarMaximo();
    int encontrarMinimo();
    string toString();
};

#endif //EJERCICIOSLISTAS_LISTACONTADOR_H
