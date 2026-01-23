// Ejercicio 20

#include "Transaccion.h"

Transaccion::Transaccion() {
    id = 0;
    monto = 0;
}

Transaccion::Transaccion(int id, string tipo, double monto, string fecha) {
    this->id = id;
    this->tipo = tipo;
    this->monto = monto;
    this->fecha = fecha;
}

int Transaccion::getId() {
    return id;
}

string Transaccion::getTipo() {
    return tipo;
}

double Transaccion::getMonto() {
    return monto;
}

string Transaccion::getFecha() {
    return fecha;
}
