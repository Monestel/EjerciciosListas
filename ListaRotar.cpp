// Ejercicio 25

#include "ListaRotar.h"

ListaRotar::ListaRotar() {
    cabeza = nullptr;
}

ListaRotar::~ListaRotar() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaRotar::agregarFinal(int v) {
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

void ListaRotar::rotarIzquierda(int posiciones) {
    if (cabeza == nullptr || posiciones <= 0) return;

    for (int i = 0; i < posiciones; i++) {
        Nodo* primero = cabeza;
        Nodo* aux = cabeza;

        while (aux->sig != nullptr)
            aux = aux->sig;

        cabeza = primero->sig;
        primero->sig = nullptr;
        aux->sig = primero;
    }
}

void ListaRotar::rotarDerecha(int posiciones) {
    if (cabeza == nullptr || posiciones <= 0) return;

    for (int i = 0; i < posiciones; i++) {
        Nodo* aux = cabeza;
        Nodo* ant = nullptr;

        while (aux->sig != nullptr) {
            ant = aux;
            aux = aux->sig;
        }

        ant->sig = nullptr;
        aux->sig = cabeza;
        cabeza = aux;
    }
}

void ListaRotar::rotarHasta(int valor) {
    if (cabeza == nullptr) return;

    while (cabeza->valor != valor) {
        Nodo* aux = cabeza;
        bool encontrado = false;

        while (aux != nullptr) {
            if (aux->valor == valor) {
                encontrado = true;
                break;
            }
            aux = aux->sig;
        }

        if (!encontrado)
            return;

        rotarIzquierda(1);
    }
}
