// Ejercicio 27

#include "ListaFiltrar.h"

ListaFiltrar::ListaFiltrar() {
    cabeza = nullptr;
}

ListaFiltrar::~ListaFiltrar() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaFiltrar::agregarFinal(int v) {
    Nodo* nuevo = new Nodo{v, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

ListaFiltrar* ListaFiltrar::filtrarPares() {
    ListaFiltrar* pares = new ListaFiltrar();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->valor % 2 == 0)
            pares->agregarFinal(aux->valor);
        aux = aux->sig;
    }
    return pares;
}

ListaFiltrar* ListaFiltrar::filtrarImpares() {
    ListaFiltrar* impares = new ListaFiltrar();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->valor % 2 != 0)
            impares->agregarFinal(aux->valor);
        aux = aux->sig;
    }
    return impares;
}

ListaFiltrar* ListaFiltrar::filtrarMayores(int valor) {
    ListaFiltrar* mayores = new ListaFiltrar();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->valor > valor)
            mayores->agregarFinal(aux->valor);
        aux = aux->sig;
    }
    return mayores;
}

ListaFiltrar* ListaFiltrar::filtrarMenores(int valor) {
    ListaFiltrar* menores = new ListaFiltrar();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->valor < valor)
            menores->agregarFinal(aux->valor);
        aux = aux->sig;
    }
    return menores;
}
