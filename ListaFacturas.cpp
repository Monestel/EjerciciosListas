// Ejercicio 17

#include "ListaFacturas.h"

ListaFacturas::ListaFacturas() {
    cabeza = nullptr;
}

ListaFacturas::~ListaFacturas() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaFacturas::agregarFactura(Factura f) {
    Nodo* nuevo = new Nodo{f, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Factura* ListaFacturas::buscarPorNumero(int numero) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->factura.getNumero() == numero)
            return &aux->factura;
        aux = aux->sig;
    }
    return nullptr;
}

double ListaFacturas::montoTotal() {
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->factura.getMonto();
        aux = aux->sig;
    }
    return suma;
}

double ListaFacturas::montoPromedio() {
    if (cabeza == nullptr) return 0;

    double suma = 0;
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->factura.getMonto();
        cont++;
        aux = aux->sig;
    }
    return suma / cont;
}

int ListaFacturas::contarPorCliente(string cliente) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->factura.getCliente() == cliente)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

Factura* ListaFacturas::facturaMayor() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Factura* mayor = &aux->factura;

    while (aux != nullptr) {
        if (aux->factura.getMonto() > mayor->getMonto())
            mayor = &aux->factura;
        aux = aux->sig;
    }
    return mayor;
}

double ListaFacturas::totalPorCliente(string cliente) {
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->factura.getCliente() == cliente)
            suma += aux->factura.getMonto();
        aux = aux->sig;
    }
    return suma;
}
