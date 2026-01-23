// Ejercicio 15

#include "Carro.h"

Carro::Carro() {
    anio = 0;
    precio = 0;
}

Carro::Carro(string placa, string marca, int anio, double precio) {
    this->placa = placa;
    this->marca = marca;
    this->anio = anio;
    this->precio = precio;
}

string Carro::getPlaca() {
    return placa;
}

string Carro::getMarca() {
    return marca;
}

int Carro::getAnio() {
    return anio;
}

double Carro::getPrecio() {
    return precio;
}
