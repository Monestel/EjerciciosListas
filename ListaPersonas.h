//Ejercicio 11

#ifndef LISTAPERSONAS_H
#define LISTAPERSONAS_H

#include "Persona.h"

class ListaPersonas {

private:

    struct Nodo {
        Persona* persona;
        Nodo* sig;
    };

    Nodo* cabeza;
    int contador;

public:
    ListaPersonas();
    ~ListaPersonas();

    void agregarPersona(Persona* p);
    Persona* buscarPorNombre(string nombre);
    int contarPorGenero(string genero);
    double promedioEdades();
    Persona* personaMasJoven();
    Persona* personaMasVieja();
    int contarMayoresDe(int edad);
};

#endif //EJERCICIOSLISTAS_LISTAPERSONAS_H