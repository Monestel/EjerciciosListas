//Ejercicio 8

#ifndef LISTADUPLICADOS_H
#define LISTADUPLICADOS_H

#include <string>
#include <sstream>
using namespace std;

#include "NodoDuplicados.h"

class ListaDuplicados {

private:

    NodoDuplicados* primero;
    int cant;

public:
    ListaDuplicados();
    ~ListaDuplicados();

    bool vacia();
    void agregarInicio(int valor);
    void agregarFinal(int valor);
    bool eliminarInicio();
    bool eliminarFinal();

    bool tieneDuplicados();
    void eliminarDuplicados();
    int contarUnicos();
    ListaDuplicados* obtenerUnicos();

    string toString();
    int tamano();
};

#endif //EJERCICIOSLISTAS_LISTADUPLICADOS_H
