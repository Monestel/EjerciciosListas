// Ejercicio 30

#include "ListaCircular.h"
#include <iostream>

ListaCircular::ListaCircular() {
    ultimo = nullptr;
}

ListaCircular::~ListaCircular() {
    if (ultimo == nullptr) return;

    Nodo* actual = ultimo->sig;
    Nodo* inicio = actual;

    do {
        Nodo* t = actual;
        actual = actual->sig;
        delete t;
    } while (actual != inicio);

    ultimo = nullptr;
}

void ListaCircular::agregar(int valor) {
    Nodo* n = new Nodo{valor, nullptr};

    if (ultimo == nullptr) {
        n->sig = n;
        ultimo = n;
    } else {
        n->sig = ultimo->sig;
        ultimo->sig = n;
        ultimo = n;
    }
}

bool ListaCircular::eliminar(int valor) {
    if (ultimo == nullptr) return false;

    Nodo* actual = ultimo->sig;
    Nodo* anterior = ultimo;

    do {
        if (actual->valor == valor) {
            if (actual == ultimo && actual == ultimo->sig) {
                delete actual;
                ultimo = nullptr;
            } else {
                anterior->sig = actual->sig;
                if (actual == ultimo)
                    ultimo = anterior;
                delete actual;
            }
            return true;
        }
        anterior = actual;
        actual = actual->sig;
    } while (actual != ultimo->sig);

    return false;
}

void ListaCircular::recorrerCompleto() {
    if (ultimo == nullptr) return;

    Nodo* aux = ultimo->sig;
    do {
        std::cout << aux->valor << " ";
        aux = aux->sig;
    } while (aux != ultimo->sig);

    std::cout << std::endl;
}

int ListaCircular::contarElementos() {
    if (ultimo == nullptr) return 0;

    int c = 0;
    Nodo* aux = ultimo->sig;
    do {
        c++;
        aux = aux->sig;
    } while (aux != ultimo->sig);

    return c;
}

bool ListaCircular::buscar(int valor) {
    if (ultimo == nullptr) return false;

    Nodo* aux = ultimo->sig;
    do {
        if (aux->valor == valor)
            return true;
        aux = aux->sig;
    } while (aux != ultimo->sig);

    return false;
}
