//Ejercicio 3

#ifndef LISTABUSQUEDA_H
#define LISTABUSQUEDA_H

#include "NodoBusqueda.h"

class ListaBusqueda {

private:

    NodoBusqueda* primero;

public:
    ListaBusqueda();
    ~ListaBusqueda();

    void agregarFinal(int valor);
    bool buscar(int valor);
    int contarApariciones(int valor);
    int obtenerPosicion(int valor);
    bool eliminarPorValor(int valor);
    int eliminarTodasOcurrencias(int valor);
};

#endif //EJERCICIOSLISTAS_LISTABUSQUEDA_H
