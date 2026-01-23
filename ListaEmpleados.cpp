// Ejercicio 16

#include "ListaEmpleados.h"

ListaEmpleados::ListaEmpleados() {
    cabeza = nullptr;
}

ListaEmpleados::~ListaEmpleados() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaEmpleados::agregarEmpleado(Empleado e) {
    Nodo* nuevo = new Nodo{e, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Empleado* ListaEmpleados::buscarPorId(int id) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->empleado.getId() == id)
            return &aux->empleado;
        aux = aux->sig;
    }
    return nullptr;
}

double ListaEmpleados::salarioPromedio() {
    if (cabeza == nullptr) return 0;

    double suma = 0;
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->empleado.getSalario();
        cont++;
        aux = aux->sig;
    }
    return suma / cont;
}

double ListaEmpleados::salarioTotal() {
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->empleado.getSalario();
        aux = aux->sig;
    }
    return suma;
}

int ListaEmpleados::contarPorDepartamento(string depto) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->empleado.getDepartamento() == depto)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

Empleado* ListaEmpleados::empleadoMejorPagado() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Empleado* mejor = &aux->empleado;

    while (aux != nullptr) {
        if (aux->empleado.getSalario() > mejor->getSalario())
            mejor = &aux->empleado;
        aux = aux->sig;
    }
    return mejor;
}

ListaEmpleados* ListaEmpleados::empleadosPorDepartamento(string depto) {
    ListaEmpleados* lista = new ListaEmpleados();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->empleado.getDepartamento() == depto)
            lista->agregarEmpleado(aux->empleado);
        aux = aux->sig;
    }
    return lista;
}
