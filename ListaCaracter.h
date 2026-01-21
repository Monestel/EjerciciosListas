//Ejercicio 4

#ifndef LISTACARACTER_H
#define LISTACARACTER_H

#include "NodoCaracter.h"
#include <string>

using namespace std;

class ListaCaracteres {

private:

    NodoCaracter* primero;
    NodoCaracter* ultimo;

public:
    ListaCaracteres();
    ~ListaCaracteres();

    void agregarInicio(char c);
    void agregarFinal(char c);
    int contarCaracter(char c);
    bool esPalindromo();
    string obtenerCadena();
    void invertir();
};

#endif //EJERCICIOSLISTAS_LISTACARACTER_H
