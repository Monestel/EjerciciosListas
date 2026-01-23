// Ejercicio 21

#ifndef LISTAINVERTIR_H
#define LISTAINVERTIR_H

class ListaInvertir {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaInvertir();
    ~ListaInvertir();

    void agregarFinal(int v);
    void invertir();
    ListaInvertir* obtenerInversa();
    bool esPalindromo();
    void invertirRango(int inicio, int fin);
};

#endif //EJERCICIOSLISTAS_LISTAINVERTIR_H