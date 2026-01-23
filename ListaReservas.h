// Ejercicio 18

#ifndef LISTARESERVAS_H
#define LISTARESERVAS_H

#include "Reserva.h"

class ListaReservas {

private:

    struct Nodo {
        Reserva reserva;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaReservas();
    ~ListaReservas();

    void agregarReserva(Reserva r);
    Reserva* buscarPorId(int id);
    int contarPorEstado(string estado);
    double montoTotalReservas();
    bool cambiarEstado(int id, string nuevoEstado);
    ListaReservas* reservasPorCliente(string cliente);
    int contarConfirmadas();
};

#endif //EJERCICIOSLISTAS_LISTARESERVAS_H