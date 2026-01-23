// Ejercicio 24

#include "ListaDividir.h"

ListaDividir::ListaDividir() {
    cabeza = nullptr;
}

ListaDividir::~ListaDividir() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaDividir::agregarFinal(int v) {
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

ListaDividir* ListaDividir::dividir(int posicion) {
    ListaDividir* segunda = new ListaDividir();

    if (cabeza == nullptr || posicion <= 0)
        return segunda;

    Nodo* act = cabeza;
    for (int i = 0; i < posicion - 1 && act->sig != nullptr; i++)
        act = act->sig;

    Nodo* aux = act->sig;
    act->sig = nullptr;

    while (aux != nullptr) {
        segunda->agregarFinal(aux->valor);
        Nodo* temp = aux;
        aux = aux->sig;
        delete temp;
    }

    return segunda;
}

ListaDividir* ListaDividir::obtenerPrimeraMitad() {
    ListaDividir* primera = new ListaDividir();
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        cont++;
        aux = aux->sig;
    }

    int mitad = cont / 2;
    aux = cabeza;

    for (int i = 0; i < mitad && aux != nullptr; i++) {
        primera->agregarFinal(aux->valor);
        aux = aux->sig;
    }

    return primera;
}

ListaDividir* ListaDividir::obtenerSegundaMitad() {
    ListaDividir* segunda = new ListaDividir();
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        cont++;
        aux = aux->sig;
    }

    int mitad = cont / 2;
    aux = cabeza;

    for (int i = 0; i < mitad && aux != nullptr; i++)
        aux = aux->sig;

    while (aux != nullptr) {
        segunda->agregarFinal(aux->valor);
        aux = aux->sig;
    }

    return segunda;
}

void ListaDividir::eliminarMitad() {
    if (cabeza == nullptr) return;

    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        cont++;
        aux = aux->sig;
    }

    int mitad = cont / 2;
    aux = cabeza;

    for (int i = 0; i < mitad - 1 && aux->sig != nullptr; i++)
        aux = aux->sig;

    Nodo* borrar = aux->sig;
    aux->sig = nullptr;

    while (borrar != nullptr) {
        Nodo* temp = borrar;
        borrar = borrar->sig;
        delete temp;
    }
}
