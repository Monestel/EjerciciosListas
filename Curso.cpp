// Ejercicio 19

#include "Curso.h"

Curso::Curso() {
    creditos = 0;
}

Curso::Curso(string codigo, string nombre, int creditos, string profesor) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
    this->profesor = profesor;
}

string Curso::getCodigo() {
    return codigo;
}

string Curso::getNombre() {
    return nombre;
}

int Curso::getCreditos() {
    return creditos;
}

string Curso::getProfesor() {
    return profesor;
}
