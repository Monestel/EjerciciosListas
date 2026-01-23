// Ejercicio 22

#include "ListaComparar.h"

ListaComparar::ListaComparar() {
    cabeza = nullptr;
}

ListaComparar::~ListaComparar() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaComparar::agregarFinal(int v) {
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

bool ListaComparar::sonIguales(ListaComparar* otra) {
    Nodo* a = cabeza;
    Nodo* b = otra->cabeza;

    while (a != nullptr && b != nullptr) {
        if (a->valor != b->valor)
            return false;
        a = a->sig;
        b = b->sig;
    }
    return a == nullptr && b == nullptr;
}

bool ListaComparar::contiene(ListaComparar* otra) {
    Nodo* b = otra->cabeza;

    while (b != nullptr) {
        bool encontrado = false;
        Nodo* a = cabeza;

        while (a != nullptr) {
            if (a->valor == b->valor) {
                encontrado = true;
                break;
            }
            a = a->sig;
        }

        if (!encontrado)
            return false;

        b = b->sig;
    }
    return true;
}

ListaComparar* ListaComparar::diferencia(ListaComparar* otra) {
    ListaComparar* dif = new ListaComparar();
    Nodo* a = cabeza;

    while (a != nullptr) {
        bool encontrado = false;
        Nodo* b = otra->cabeza;

        while (b != nullptr) {
            if (a->valor == b->valor) {
                encontrado = true;
                break;
            }
            b = b->sig;
        }

        if (!encontrado)
            dif->agregarFinal(a->valor);

        a = a->sig;
    }
    return dif;
}

ListaComparar* ListaComparar::interseccion(ListaComparar* otra) {
    ListaComparar* inter = new ListaComparar();
    Nodo* a = cabeza;

    while (a != nullptr) {
        Nodo* b = otra->cabeza;
        bool encontrado = false;

        while (b != nullptr) {
            if (a->valor == b->valor) {
                encontrado = true;
                break;
            }
            b = b->sig;
        }

        if (encontrado)
            inter->agregarFinal(a->valor);

        a = a->sig;
    }
    return inter;
}
