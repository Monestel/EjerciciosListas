//Ejercicio 2

#include "ListaContador.h"
#include <sstream>

ListaEnteros2::ListaEnteros2() {
    primero = NULL;
    ultimo = NULL;
    cantidad = 0;
}

ListaEnteros2::~ListaEnteros2() {
    while (primero != NULL) {
        NodoEntero2* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

bool ListaEnteros2::vacia() {
    return primero == NULL;
}

void ListaEnteros2::agregarInicio(int valor) {
    NodoEntero2* nuevo = new NodoEntero2(valor, primero);

    if (vacia()) {
        ultimo = nuevo;
    }

    primero = nuevo;
    cantidad++;
}

void ListaEnteros2::agregarFinal(int valor) {
    NodoEntero2* nuevo = new NodoEntero2(valor, NULL);

    if (vacia()) {
        primero = ultimo = nuevo;
    } else {
        ultimo->setSig(nuevo);
        ultimo = nuevo;
    }

    cantidad++;
}

bool ListaEnteros2::eliminaInicio() {
    if (vacia())
        return false;

    NodoEntero2* temp = primero;
    primero = primero->getSig();

    if (primero == NULL) {
        ultimo = NULL;
    }

    delete temp;
    cantidad--;
    return true;
}

bool ListaEnteros2::eliminaFinal() {
    if (vacia())
        return false;

    if (primero == ultimo) {
        delete primero;
        primero = ultimo = NULL;
    } else {
        NodoEntero2* actual = primero;
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

int ListaEnteros2::getCantidad() {
    return cantidad;
}

int ListaEnteros2::obtenerPrimero() {
    if (vacia())
        return -1;
    return primero->getValor();
}

int ListaEnteros2::obtenerUltimo() {
    if (vacia())
        return -1;
    return ultimo->getValor();
}

int ListaEnteros2::sumarElementos() {
    int suma = 0;
    NodoEntero2* actual = primero;

    while (actual != NULL) {
        suma += actual->getValor();
        actual = actual->getSig();
    }

    return suma;
}

double ListaEnteros2::promedio() {
    if (vacia())
        return 0;

    return (double)sumarElementos() / cantidad;
}

int ListaEnteros2::encontrarMaximo() {
    if (vacia())
        return -1;

    int max = primero->getValor();
    NodoEntero2* actual = primero->getSig();

    while (actual != NULL) {
        if (actual->getValor() > max)
            max = actual->getValor();
        actual = actual->getSig();
    }

    return max;
}

int ListaEnteros2::encontrarMinimo() {
    if (vacia())
        return -1;

    int min = primero->getValor();
    NodoEntero2* actual = primero->getSig();

    while (actual != NULL) {
        if (actual->getValor() < min)
            min = actual->getValor();
        actual = actual->getSig();
    }

    return min;
}

string ListaEnteros2::toString() {
    stringstream ss;
    NodoEntero2* actual = primero;

    while (actual != NULL) {
        ss << actual->getValor() << " -> ";
        actual = actual->getSig();
    }

    ss << "NULL";
    return ss.str();
}
