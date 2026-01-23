//Ejercicio 10

#ifndef LISTARANGO_H
#define LISTARANGO_H

#include <string>
#include <sstream>
using namespace std;

#include "NodoRango.h"

class ListaRango {

private:

    NodoRango* primero;
    int cant;

public:
    ListaRango();
    ~ListaRango();

    bool vacia();
    void agregarFinal(int valor);

    ListaRango* obtenerRango(int inicio, int fin);
    void eliminarRango(int inicio, int fin);

    void insertarEnPosicion(int posicion, int valor);
    bool eliminarEnPosicion(int posicion);
    int obtenerEnPosicion(int posicion);

    string toString();
    int tamano();
};

#endif //EJERCICIOSLISTAS_LISTARANGO_H
