// Ejercicio 16

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {

private:

    int id;
    string nombre;
    double salario;
    string departamento;

public:
    Empleado();
    Empleado(int id, string nombre, double salario, string departamento);

    int getId();
    string getNombre();
    double getSalario();
    string getDepartamento();
};

#endif //EJERCICIOSLISTAS_EMPLEADO_H