// Ejercicio 29

#include "ListaHistorial.h"

ListaHistorial::ListaHistorial() {
    cabeza = nullptr;
    undo = nullptr;
    redo = nullptr;
}

ListaHistorial::~ListaHistorial() {
    liberarLista(cabeza);
    limpiarPila(undo);
    limpiarPila(redo);
}

void ListaHistorial::liberarLista(Nodo* l) {
    while (l != nullptr) {
        Nodo* t = l;
        l = l->sig;
        delete t;
    }
}

ListaHistorial::Nodo* ListaHistorial::copiarLista(Nodo* l) {
    if (l == nullptr) return nullptr;

    Nodo* nueva = new Nodo{l->valor, nullptr};
    Nodo* auxN = nueva;
    Nodo* aux = l->sig;

    while (aux != nullptr) {
        auxN->sig = new Nodo{aux->valor, nullptr};
        auxN = auxN->sig;
        aux = aux->sig;
    }
    return nueva;
}

void ListaHistorial::guardarEstado() {
    Estado* e = new Estado{copiarLista(cabeza), undo};
    undo = e;
    limpiarPila(redo);
}

void ListaHistorial::limpiarPila(Estado*& p) {
    while (p != nullptr) {
        Estado* t = p;
        p = p->sig;
        liberarLista(t->lista);
        delete t;
    }
}

void ListaHistorial::agregarFinal(int v) {
    guardarEstado();

    Nodo* n = new Nodo{v, nullptr};
    if (cabeza == nullptr) {
        cabeza = n;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = n;
    }
}

void ListaHistorial::eliminarInicio() {
    if (cabeza == nullptr) return;

    guardarEstado();
    Nodo* t = cabeza;
    cabeza = cabeza->sig;
    delete t;
}

void ListaHistorial::deshacer() {
    if (undo == nullptr) return;

    Estado* e = undo;
    undo = undo->sig;

    Estado* r = new Estado{copiarLista(cabeza), redo};
    redo = r;

    liberarLista(cabeza);
    cabeza = copiarLista(e->lista);

    liberarLista(e->lista);
    delete e;
}

void ListaHistorial::rehacer() {
    if (redo == nullptr) return;

    Estado* e = redo;
    redo = redo->sig;

    Estado* u = new Estado{copiarLista(cabeza), undo};
    undo = u;

    liberarLista(cabeza);
    cabeza = copiarLista(e->lista);

    liberarLista(e->lista);
    delete e;
}

int ListaHistorial::historialDisponible() {
    int c = 0;
    Estado* aux = undo;
    while (aux != nullptr) {
        c++;
        aux = aux->sig;
    }
    return c;
}

void ListaHistorial::limpiarHistorial() {
    limpiarPila(undo);
    limpiarPila(redo);
}
