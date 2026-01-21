//Ejercicio 1

#include "ListaEnteroB.h"
#include <sstream>

ListaEnterosB::ListaEnterosB() {
    primero = NULL;
    ultimo = NULL;
    cantidad = 0;
}

ListaEnterosB::~ListaEnterosB() {
    while (primero != NULL) {
        NodoEnteroB* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

bool ListaEnterosB::vacia() {
    return primero == NULL;
}

void ListaEnterosB::agregarInicio(int valor) {
    NodoEnteroB* nuevo = new NodoEnteroB(valor, primero);

    if (vacia()) {
        ultimo = nuevo;
    }

    primero = nuevo;
    cantidad++;
}

void ListaEnterosB::agregarFinal(int valor) {
    NodoEnteroB* nuevo = new NodoEnteroB(valor, NULL);

    if (vacia()) {
        primero = ultimo = nuevo;
    } else {
        ultimo->setSig(nuevo);
        ultimo = nuevo;
    }

    cantidad++;
}

bool ListaEnterosB::eliminaInicio() {
    if (vacia())
        return false;

    NodoEnteroB* temp = primero;
    primero = primero->getSig();

    if (primero == NULL) {
        ultimo = NULL;
    }

    delete temp;
    cantidad--;
    return true;
}

bool ListaEnterosB::eliminaFinal() {
    if (vacia())
        return false;

    if (primero == ultimo) {
        delete primero;
        primero = ultimo = NULL;
    } else {
        NodoEnteroB* actual = primero;
        while (actual->getSig() != ultimo) {
            actual = actual->getSig();
        }

        delete ultimo;
        ultimo = actual;
        ultimo->setSig(NULL);
    }

    cantidad--;
    return true;
}

int ListaEnterosB::getCantidad() {
    return cantidad;
}

string ListaEnterosB::toString() {
    stringstream ss;
    NodoEnteroB* actual = primero;

    while (actual != NULL) {
        ss << actual->getValor() << " -> ";
        actual = actual->getSig();
    }

    ss << "NULL";
    return ss.str();
}
