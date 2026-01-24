// Ejercicio 12 y 33

#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string carnet, double promedio) {
    this->nombre = nombre;
    this->carnet = carnet;
    this->promedio = promedio;
}

Estudiante::Estudiante(string carnet, string nombre, int edad, double promedio, string carrera, int semestre) {
    this->carnet = carnet;
    this->nombre = nombre;
    this->edad = edad;
    this->promedio = promedio;
    this->carrera = carrera;
    this->semestre = semestre;
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

string Estudiante::getCarrera() {
    return carrera;
}

int Estudiante::getSemestre() {
    return semestre;
}

int Estudiante::getCantidad() {
    return semestre;
}

