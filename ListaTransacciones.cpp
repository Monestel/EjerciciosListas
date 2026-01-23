// Ejercicio 20

#include "ListaTransacciones.h"

ListaTransacciones::ListaTransacciones() {
    cabeza = nullptr;
}

ListaTransacciones::~ListaTransacciones() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaTransacciones::agregarTransaccion(Transaccion t) {
    Nodo* nuevo = new Nodo{t, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Transaccion* ListaTransacciones::buscarPorId(int id) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->transaccion.getId() == id)
            return &aux->transaccion;
        aux = aux->sig;
    }
    return nullptr;
}

double ListaTransacciones::montoTotal() {
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->transaccion.getMonto();
        aux = aux->sig;
    }
    return suma;
}

double ListaTransacciones::montoPorTipo(string tipo) {
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->transaccion.getTipo() == tipo)
            suma += aux->transaccion.getMonto();
        aux = aux->sig;
    }
    return suma;
}

int ListaTransacciones::contarPorTipo(string tipo) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->transaccion.getTipo() == tipo)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

Transaccion* ListaTransacciones::transaccionMayor() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Transaccion* mayor = &aux->transaccion;

    while (aux != nullptr) {
        if (aux->transaccion.getMonto() > mayor->getMonto())
            mayor = &aux->transaccion;
        aux = aux->sig;
    }
    return mayor;
}

ListaTransacciones* ListaTransacciones::transaccionesPorTipo(string tipo) {
    ListaTransacciones* lista = new ListaTransacciones();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->transaccion.getTipo() == tipo)
            lista->agregarTransaccion(aux->transaccion);
        aux = aux->sig;
    }
    return lista;
}
