// Ejercicio 15

#ifndef LISTACARROS_H
#define LISTACARROS_H

#include "Carro.h"

class ListaCarros {

private:

    struct Nodo {
        Carro carro;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaCarros();
    ~ListaCarros();

    void insertarOrdenado(Carro c);
    bool eliminarPorPlaca(string placa);
    Carro* buscarPorPlaca(string placa);
    int contarPorMarca(string marca);
    Carro* carroMasViejo();
    Carro* carroMasNuevo();
    double precioPromedio();
};

#endif //EJERCICIOSLISTAS_LISTACARROS_H