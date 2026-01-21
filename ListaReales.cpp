//Ejercicio 5

#include "ListaReales.h"

ListaReales::ListaReales() {
    primero = nullptr;
    cantidad = 0;
}

ListaReales::~ListaReales() {
    while (primero != nullptr) {
        NodoReales* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

bool ListaReales::vacia() {
    return primero == nullptr;
}

void ListaReales::agregarInicio(double valor) {
    NodoReales* nuevo = new NodoReales(valor, primero);
    primero = nuevo;
    cantidad++;
}

void ListaReales::agregarFinal(double valor) {
    NodoReales* nuevo = new NodoReales(valor, nullptr);

    if (vacia()) {
        primero = nuevo;
    } else {
        NodoReales* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(nuevo);
    }
    cantidad++;
}

bool ListaReales::eliminarInicio() {
    if (vacia()) return false;

    NodoReales* temp = primero;
    primero = primero->getSig();
    delete temp;
    cantidad--;
    return true;
}

bool ListaReales::eliminarFinal() {
    if (vacia()) return false;

    if (primero->getSig() == nullptr) {
        delete primero;
        primero = nullptr;
    } else {
        NodoReales* actual = primero;
        while (actual->getSig()->getSig() != nullptr) {
            actual = actual->getSig();
        }
        delete actual->getSig();
        actual->setSig(nullptr);
    }
    cantidad--;
    return true;
}

double ListaReales::suma() {
    double total = 0;
    NodoReales* actual = primero;

    while (actual != nullptr) {
        total += actual->getDato();
        actual = actual->getSig();
    }
    return total;
}

double ListaReales::promedio() {
    if (cantidad == 0) return 0;
    return suma() / cantidad;
}

double ListaReales::producto() {
    if (cantidad == 0) return 0;

    double prod = 1;
    NodoReales* actual = primero;

    while (actual != nullptr) {
        prod *= actual->getDato();
        actual = actual->getSig();
    }
    return prod;
}

int ListaReales::contarPositivos() {
    int cont = 0;
    NodoReales* actual = primero;

    while (actual != nullptr) {
        if (actual->getDato() > 0) cont++;
        actual = actual->getSig();
    }
    return cont;
}

int ListaReales::contarNegativos() {
    int cont = 0;
    NodoReales* actual = primero;

    while (actual != nullptr) {
        if (actual->getDato() < 0) cont++;
        actual = actual->getSig();
    }
    return cont;
}

double ListaReales::encontrarMayor() {
    if (vacia()) return 0;

    double mayor = primero->getDato();
    NodoReales* actual = primero->getSig();

    while (actual != nullptr) {
        if (actual->getDato() > mayor) {
            mayor = actual->getDato();
        }
        actual = actual->getSig();
    }
    return mayor;
}

double ListaReales::encontrarMenor() {
    if (vacia()) return 0;

    double menor = primero->getDato();
    NodoReales* actual = primero->getSig();

    while (actual != nullptr) {
        if (actual->getDato() < menor) {
            menor = actual->getDato();
        }
        actual = actual->getSig();
    }
    return menor;
}

int ListaReales::getCantidad() {
    return cantidad;
}

string ListaReales::toString() {
    stringstream ss;
    NodoReales* actual = primero;

    while (actual != nullptr) {
        ss << actual->getDato() << " ";
        actual = actual->getSig();
    }
    return ss.str();
}
