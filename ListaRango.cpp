//Ejercicio 10

#include "ListaRango.h"

ListaRango::ListaRango() {
    primero = nullptr;
    cant = 0;
}

ListaRango::~ListaRango() {
    while (primero != nullptr) {
        NodoRango* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

bool ListaRango::vacia() {
    return primero == nullptr;
}

void ListaRango::agregarFinal(int valor) {
    NodoRango* nuevo = new NodoRango(valor, nullptr);

    if (vacia()) {
        primero = nuevo;
    } else {
        NodoRango* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(nuevo);
    }
    cant++;
}

ListaRango* ListaRango::obtenerRango(int inicio, int fin) {
    ListaRango* nueva = new ListaRango();
    NodoRango* actual = primero;
    int pos = 0;

    while (actual != nullptr) {
        if (pos >= inicio && pos <= fin) {
            nueva->agregarFinal(actual->getDato());
        }
        actual = actual->getSig();
        pos++;
    }
    return nueva;
}

void ListaRango::eliminarRango(int inicio, int fin) {
    for (int i = inicio; i <= fin; i++) {
        eliminarEnPosicion(inicio);
    }
}

void ListaRango::insertarEnPosicion(int posicion, int valor) {
    if (posicion < 0 || posicion > cant) return;

    if (posicion == 0) {
        primero = new NodoRango(valor, primero);
    } else {
        NodoRango* actual = primero;
        for (int i = 0; i < posicion - 1; i++) {
            actual = actual->getSig();
        }
        actual->setSig(new NodoRango(valor, actual->getSig()));
    }
    cant++;
}

bool ListaRango::eliminarEnPosicion(int posicion) {
    if (posicion < 0 || posicion >= cant || vacia()) return false;

    NodoRango* temp;

    if (posicion == 0) {
        temp = primero;
        primero = primero->getSig();
    } else {
        NodoRango* actual = primero;
        for (int i = 0; i < posicion - 1; i++) {
            actual = actual->getSig();
        }
        temp = actual->getSig();
        actual->setSig(temp->getSig());
    }

    delete temp;
    cant--;
    return true;
}

int ListaRango::obtenerEnPosicion(int posicion) {
    if (posicion < 0 || posicion >= cant) return -1;

    NodoRango* actual = primero;
    for (int i = 0; i < posicion; i++) {
        actual = actual->getSig();
    }
    return actual->getDato();
}

string ListaRango::toString() {
    stringstream ss;
    NodoRango* actual = primero;

    while (actual != nullptr) {
        ss << actual->getDato() << " ";
        actual = actual->getSig();
    }
    return ss.str();
}

int ListaRango::tamano() {
    return cant;
}
