//Ejercicio 11

#include "Persona.h"

Persona::Persona(string nombre, int edad, string genero) {
    this->nombre = nombre;
    this->edad = edad;
    this->genero = genero;
}

string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

string Persona::getGenero() {
    return genero;
}
