// Ejercicio 16

#ifndef LISTAEMPLEADOS_H
#define LISTAEMPLEADOS_H

#include "Empleado.h"

class ListaEmpleados {

private:

    struct Nodo {
        Empleado empleado;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaEmpleados();
    ~ListaEmpleados();

    void agregarEmpleado(Empleado e);
    Empleado* buscarPorId(int id);
    double salarioPromedio();
    double salarioTotal();
    int contarPorDepartamento(string depto);
    Empleado* empleadoMejorPagado();
    ListaEmpleados* empleadosPorDepartamento(string depto);
};

#endif //EJERCICIOSLISTAS_LISTAEMPLEADOS_H