//Ejercicio 5

#ifndef LISTAREALES_H
#define LISTAREALES_H

#include <string>
#include <sstream>
using namespace std;

#include "NodoReales.h"

class ListaReales {

private:

    NodoReales* primero;
    int cantidad;

public:
    ListaReales();
    ~ListaReales();

    bool vacia();
    void agregarInicio(double valor);
    void agregarFinal(double valor);
    bool eliminarInicio();
    bool eliminarFinal();

    double suma();
    double promedio();
    double producto();
    int contarPositivos();
    int contarNegativos();
    double encontrarMayor();
    double encontrarMenor();

    int getCantidad();
    string toString();
};

#endif //EJERCICIOSLISTAS_LISTAREALES_H
