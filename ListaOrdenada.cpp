//Ejercicio 9
#include "ListaOrdenada.h"

ListaOrdenada::ListaOrdenada() {
    primero = nullptr;
    cant = 0;
}

ListaOrdenada::~ListaOrdenada() {
    while (primero != nullptr) {
        NodoOrdenada* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

bool ListaOrdenada::vacia() {
    return primero == nullptr;
}

void ListaOrdenada::agregarFinal(int valor) {
    NodoOrdenada* nuevo = new NodoOrdenada(valor, nullptr);

    if (vacia()) {
        primero = nuevo;
    } else {
        NodoOrdenada* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(nuevo);
    }
    cant++;
}

void ListaOrdenada::insertarOrdenado(int valor) {
    NodoOrdenada* nuevo = new NodoOrdenada(valor, nullptr);

    if (vacia() || valor <= primero->getDato()) {
        nuevo->setSig(primero);
        primero = nuevo;
    } else {
        NodoOrdenada* actual = primero;
        while (actual->getSig() != nullptr &&
               actual->getSig()->getDato() < valor) {
            actual = actual->getSig();
        }
        nuevo->setSig(actual->getSig());
        actual->setSig(nuevo);
    }
    cant++;
}

void ListaOrdenada::insertarOrdenadoDesc(int valor) {
    NodoOrdenada* nuevo = new NodoOrdenada(valor, nullptr);

    if (vacia() || valor >= primero->getDato()) {
        nuevo->setSig(primero);
        primero = nuevo;
    } else {
        NodoOrdenada* actual = primero;
        while (actual->getSig() != nullptr &&
               actual->getSig()->getDato() > valor) {
            actual = actual->getSig();
        }
        nuevo->setSig(actual->getSig());
        actual->setSig(nuevo);
    }
    cant++;
}

bool ListaOrdenada::estaOrdenada() {
    if (primero == nullptr || primero->getSig() == nullptr) return true;

    NodoOrdenada* actual = primero;

    while (actual->getSig() != nullptr) {
        if (actual->getDato() > actual->getSig()->getDato()) {
            return false;
        }
        actual = actual->getSig();
    }
    return true;
}

void ListaOrdenada::ordenar() {
    if (vacia()) return;

    bool cambio;
    do {
        cambio = false;
        NodoOrdenada* actual = primero;

        while (actual->getSig() != nullptr) {
            if (actual->getDato() > actual->getSig()->getDato()) {
                int temp = actual->getDato();
                actual->setSig(
                    new NodoOrdenada(actual->getSig()->getDato(),
                    actual->getSig()->getSig())
                );
                actual->getSig()->setSig(
                    actual->getSig()->getSig()
                );
                actual->setSig(actual->getSig());
                actual->getSig()->setSig(nullptr);
                actual->getSig()->setSig(nullptr);
            }
            actual = actual->getSig();
        }
    } while (cambio);
}

void ListaOrdenada::ordenarDesc() {
    if (vacia()) return;

    bool cambio;
    do {
        cambio = false;
        NodoOrdenada* actual = primero;

        while (actual->getSig() != nullptr) {
            if (actual->getDato() < actual->getSig()->getDato()) {
                int temp = actual->getDato();
                actual->setSig(
                    new NodoOrdenada(actual->getSig()->getDato(),
                    actual->getSig()->getSig())
                );
                actual->getSig()->setSig(
                    actual->getSig()->getSig()
                );
                actual->setSig(actual->getSig());
                actual->getSig()->setSig(nullptr);
                actual->getSig()->setSig(nullptr);
            }
            actual = actual->getSig();
        }
    } while (cambio);
}

string ListaOrdenada::toString() {
    stringstream ss;
    NodoOrdenada* actual = primero;

    while (actual != nullptr) {
        ss << actual->getDato() << " ";
        actual = actual->getSig();
    }
    return ss.str();
}

int ListaOrdenada::tamano() {
    return cant;
}
