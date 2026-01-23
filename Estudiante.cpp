// Ejercicio 12

#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string carnet, double promedio) {
    this->nombre = nombre;
    this->carnet = carnet;
    this->promedio = promedio;
}

string Estudiante::getNombre() {
    return nombre;
}

string Estudiante::getCarnet() {
    return carnet;
}

double Estudiante::getPromedio() {
    return promedio;
}

void Estudiante::setPromedio(double promedio) {
    this->promedio = promedio;
}
