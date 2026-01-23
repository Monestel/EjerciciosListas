//Ejercicio 9

#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H

#include <string>
#include <sstream>
using namespace std;

#include "NodoOrdenada.h"

class ListaOrdenada {

private:

    NodoOrdenada* primero;
    int cant;

public:
    ListaOrdenada();
    ~ListaOrdenada();

    bool vacia();
    void agregarFinal(int valor);

    void insertarOrdenado(int valor);
    void insertarOrdenadoDesc(int valor);

    bool estaOrdenada();
    void ordenar();
    void ordenarDesc();

    string toString();
    int tamano();
};

#endif //EJERCICIOSLISTAS_LISTAORDENADA_H