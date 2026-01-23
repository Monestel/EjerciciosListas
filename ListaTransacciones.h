// Ejercicio 20

#ifndef LISTATRANSACCIONES_H
#define LISTATRANSACCIONES_H

#include "Transaccion.h"

class ListaTransacciones {

private:

    struct Nodo {
        Transaccion transaccion;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaTransacciones();
    ~ListaTransacciones();

    void agregarTransaccion(Transaccion t);
    Transaccion* buscarPorId(int id);
    double montoTotal();
    double montoPorTipo(string tipo);
    int contarPorTipo(string tipo);
    Transaccion* transaccionMayor();
    ListaTransacciones* transaccionesPorTipo(string tipo);
};

#endif //EJERCICIOSLISTAS_LISTATRANSACCIONES_H