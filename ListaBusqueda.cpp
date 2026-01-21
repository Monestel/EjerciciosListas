//Ejercicio 3

#include "ListaBusqueda.h"

ListaBusqueda::ListaBusqueda() {
    primero = nullptr;
}

ListaBusqueda::~ListaBusqueda() {
    while (primero != nullptr) {
        NodoBusqueda* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

void ListaBusqueda::agregarFinal(int valor) {
    NodoBusqueda* nuevo = new NodoBusqueda(valor, nullptr);

    if (primero == nullptr) {
        primero = nuevo;
    } else {
        NodoBusqueda* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(nuevo);
    }
}

bool ListaBusqueda::buscar(int valor) {
    NodoBusqueda* actual = primero;

    while (actual != nullptr) {
        if (actual->getValor() == valor)
            return true;
        actual = actual->getSig();
    }

    return false;
}

int ListaBusqueda::contarApariciones(int valor) {
    int cont = 0;
    NodoBusqueda* actual = primero;

    while (actual != nullptr) {
        if (actual->getValor() == valor)
            cont++;
        actual = actual->getSig();
    }

    return cont;
}

int ListaBusqueda::obtenerPosicion(int valor) {
    int pos = 0;
    NodoBusqueda* actual = primero;

    while (actual != nullptr) {
        if (actual->getValor() == valor)
            return pos;
        actual = actual->getSig();
        pos++;
    }

    return -1;
}

bool ListaBusqueda::eliminarPorValor(int valor) {
    if (primero == nullptr)
        return false;

    if (primero->getValor() == valor) {
        NodoBusqueda* temp = primero;
        primero = primero->getSig();
        delete temp;
        return true;
    }

    NodoBusqueda* actual = primero;

    while (actual->getSig() != nullptr &&
           actual->getSig()->getValor() != valor) {
        actual = actual->getSig();
    }

    if (actual->getSig() == nullptr)
        return false;

    NodoBusqueda* temp = actual->getSig();
    actual->setSig(temp->getSig());
    delete temp;
    return true;
}

int ListaBusqueda::eliminarTodasOcurrencias(int valor) {
    int eliminados = 0;

    while (primero != nullptr && primero->getValor() == valor) {
        NodoBusqueda* temp = primero;
        primero = primero->getSig();
        delete temp;
        eliminados++;
    }

    NodoBusqueda* actual = primero;

    while (actual != nullptr && actual->getSig() != nullptr) {
        if (actual->getSig()->getValor() == valor) {
            NodoBusqueda* temp = actual->getSig();
            actual->setSig(temp->getSig());
            delete temp;
            eliminados++;
        } else {
            actual = actual->getSig();
        }
    }

    return eliminados;
}
