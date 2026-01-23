// Ejercicio 18

#include "Reserva.h"

Reserva::Reserva() {
    id = 0;
    monto = 0;
}

Reserva::Reserva(int id, string cliente, string fecha, double monto, string estado) {
    this->id = id;
    this->cliente = cliente;
    this->fecha = fecha;
    this->monto = monto;
    this->estado = estado;
}

int Reserva::getId() {
    return id;
}

string Reserva::getCliente() {
    return cliente;
}

string Reserva::getFecha() {
    return fecha;
}

double Reserva::getMonto() {
    return monto;
}

string Reserva::getEstado() {
    return estado;
}

void Reserva::setEstado(string estado) {
    this->estado = estado;
}
