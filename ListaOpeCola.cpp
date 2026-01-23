//Ejercicio 7

#include "ListaOpeCola.h"

ListaCola::ListaCola() {
    primero = nullptr;
    ultimo = nullptr;
    cant = 0;
}

ListaCola::~ListaCola() {
    while (primero != nullptr) {
        NodoCola* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
    ultimo = nullptr;
}

void ListaCola::encolar(int valor) {
    NodoCola* nuevo = new NodoCola(valor, nullptr);

    if (estaVacia()) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        ultimo->setSig(nuevo);
        ultimo = nuevo;
    }
    cant++;
}

int ListaCola::desencolar() {
    if (estaVacia()) return -1;

    NodoCola* temp = primero;
    int valor = temp->getDato();
    primero = primero->getSig();

    if (primero == nullptr) {
        ultimo = nullptr;
    }

    delete temp;
    cant--;
    return valor;
}

int ListaCola::frente() {
    if (estaVacia()) return -1;
    return primero->getDato();
}

bool ListaCola::estaVacia() {
    return primero == nullptr;
}

int ListaCola::tamano() {
    return cant;
}
