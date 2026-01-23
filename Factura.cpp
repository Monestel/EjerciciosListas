// Ejercicio 17

#include "Factura.h"

Factura::Factura() {
    numero = 0;
    monto = 0;
}

Factura::Factura(int numero, string cliente, double monto, string fecha) {
    this->numero = numero;
    this->cliente = cliente;
    this->monto = monto;
    this->fecha = fecha;
}

int Factura::getNumero() {
    return numero;
}

string Factura::getCliente() {
    return cliente;
}

double Factura::getMonto() {
    return monto;
}

string Factura::getFecha() {
    return fecha;
}
