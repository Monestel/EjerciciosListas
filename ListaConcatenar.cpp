// Ejercicio 23

#include "ListaConcatenar.h"

ListaConcatenar::ListaConcatenar() {
    cabeza = nullptr;
}

ListaConcatenar::~ListaConcatenar() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaConcatenar::agregarFinal(int v) {
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

void ListaConcatenar::concatenar(ListaConcatenar* otra) {
    Nodo* aux = otra->cabeza;

    while (aux != nullptr) {
        agregarFinal(aux->valor);
        aux = aux->sig;
    }
}

ListaConcatenar* ListaConcatenar::unir(ListaConcatenar* otra) {
    ListaConcatenar* nueva = new ListaConcatenar();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        nueva->agregarFinal(aux->valor);
        aux = aux->sig;
    }

    aux = otra->cabeza;
    while (aux != nullptr) {
        nueva->agregarFinal(aux->valor);
        aux = aux->sig;
    }
    return nueva;
}

void ListaConcatenar::insertarLista(int posicion, ListaConcatenar* otra) {
    if (otra->cabeza == nullptr) return;

    if (posicion <= 0 || cabeza == nullptr) {
        Nodo* aux = otra->cabeza;
        Nodo* ultimo = aux;

        while (ultimo->sig != nullptr)
            ultimo = ultimo->sig;

        ultimo->sig = cabeza;
        cabeza = aux;
        return;
    }

    Nodo* act = cabeza;
    for (int i = 0; i < posicion - 1 && act->sig != nullptr; i++)
        act = act->sig;

    Nodo* aux = otra->cabeza;
    Nodo* ultimo = aux;

    while (ultimo->sig != nullptr)
        ultimo = ultimo->sig;

    ultimo->sig = act->sig;
    act->sig = aux;
}
