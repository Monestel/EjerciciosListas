// Ejercicio 17

#ifndef LISTAFACTURAS_H
#define LISTAFACTURAS_H

#include "Factura.h"

class ListaFacturas {

private:

    struct Nodo {
        Factura factura;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaFacturas();
    ~ListaFacturas();

    void agregarFactura(Factura f);
    Factura* buscarPorNumero(int numero);
    double montoTotal();
    double montoPromedio();
    int contarPorCliente(string cliente);
    Factura* facturaMayor();
    double totalPorCliente(string cliente);
};

#endif //EJERCICIOSLISTAS_LISTAFACTURAS_H
