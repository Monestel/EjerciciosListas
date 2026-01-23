// Ejercicio 16

#include "Empleado.h"

Empleado::Empleado() {
    id = 0;
    salario = 0;
}

Empleado::Empleado(int id, string nombre, double salario, string departamento) {
    this->id = id;
    this->nombre = nombre;
    this->salario = salario;
    this->departamento = departamento;
}

int Empleado::getId() {
    return id;
}

string Empleado::getNombre() {
    return nombre;
}

double Empleado::getSalario() {
    return salario;
}

string Empleado::getDepartamento() {
    return departamento;
}
