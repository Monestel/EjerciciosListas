// Ejercicio 26

#include "ListaOrdenar.h"

ListaOrdenar::ListaOrdenar() {
    cabeza = nullptr;
}

ListaOrdenar::~ListaOrdenar() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaOrdenar::agregarFinal(int v) {
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

void ListaOrdenar::ordenarBurbuja() {
    if (cabeza == nullptr) return;

    bool cambio;
    do {
        cambio = false;
        Nodo* aux = cabeza;

        while (aux->sig != nullptr) {
            if (aux->valor > aux->sig->valor) {
                int temp = aux->valor;
                aux->valor = aux->sig->valor;
                aux->sig->valor = temp;
                cambio = true;
            }
            aux = aux->sig;
        }
    } while (cambio);
}

void ListaOrdenar::ordenarSeleccion() {
    Nodo* i = cabeza;

    while (i != nullptr) {
        Nodo* min = i;
        Nodo* j = i->sig;

        while (j != nullptr) {
            if (j->valor < min->valor)
                min = j;
            j = j->sig;
        }

        int temp = i->valor;
        i->valor = min->valor;
        min->valor = temp;

        i = i->sig;
    }
}

void ListaOrdenar::ordenarInsercion() {
    if (cabeza == nullptr || cabeza->sig == nullptr) return;

    Nodo* ordenada = nullptr;
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        Nodo* sig = actual->sig;

        if (ordenada == nullptr || actual->valor < ordenada->valor) {
            actual->sig = ordenada;
            ordenada = actual;
        } else {
            Nodo* aux = ordenada;
            while (aux->sig != nullptr && aux->sig->valor < actual->valor)
                aux = aux->sig;

            actual->sig = aux->sig;
            aux->sig = actual;
        }

        actual = sig;
    }
    cabeza = ordenada;
}

bool ListaOrdenar::estaOrdenada() {
    if (cabeza == nullptr) return true;

    Nodo* aux = cabeza;
    while (aux->sig != nullptr) {
        if (aux->valor > aux->sig->valor)
            return false;
        aux = aux->sig;
    }
    return true;
}
