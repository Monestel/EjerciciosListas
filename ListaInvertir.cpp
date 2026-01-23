// Ejercicio 21

#include "ListaInvertir.h"

ListaInvertir::ListaInvertir() {
    cabeza = nullptr;
}

ListaInvertir::~ListaInvertir() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaInvertir::agregarFinal(int v) {
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

void ListaInvertir::invertir() {
    Nodo* ant = nullptr;
    Nodo* act = cabeza;
    Nodo* sig = nullptr;

    while (act != nullptr) {
        sig = act->sig;
        act->sig = ant;
        ant = act;
        act = sig;
    }
    cabeza = ant;
}

ListaInvertir* ListaInvertir::obtenerInversa() {
    ListaInvertir* inv = new ListaInvertir();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        Nodo* nuevo = new Nodo{aux->valor, inv->cabeza};
        inv->cabeza = nuevo;
        aux = aux->sig;
    }
    return inv;
}

bool ListaInvertir::esPalindromo() {
    ListaInvertir* inv = obtenerInversa();

    Nodo* a = cabeza;
    Nodo* b = inv->cabeza;

    while (a != nullptr && b != nullptr) {
        if (a->valor != b->valor) {
            delete inv;
            return false;
        }
        a = a->sig;
        b = b->sig;
    }

    delete inv;
    return true;
}

void ListaInvertir::invertirRango(int inicio, int fin) {
    if (inicio >= fin || cabeza == nullptr) return;

    Nodo* prevInicio = nullptr;
    Nodo* inicioNodo = cabeza;

    for (int i = 0; i < inicio && inicioNodo != nullptr; i++) {
        prevInicio = inicioNodo;
        inicioNodo = inicioNodo->sig;
    }

    if (inicioNodo == nullptr) return;

    Nodo* ant = nullptr;
    Nodo* act = inicioNodo;
    Nodo* sig = nullptr;

    for (int i = inicio; i <= fin && act != nullptr; i++) {
        sig = act->sig;
        act->sig = ant;
        ant = act;
        act = sig;
    }

    if (prevInicio != nullptr)
        prevInicio->sig = ant;
    else
        cabeza = ant;

    inicioNodo->sig = act;
}
