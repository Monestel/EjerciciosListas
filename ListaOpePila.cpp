//Ejercicio 6

#include "ListaOpePila.h"
#include "NodoOpePila.h"

ListaPila::ListaPila() {
    cima = nullptr;
    cant = 0;
}

ListaPila::~ListaPila() {
    while (cima != nullptr) {
        NodoPila* temp = cima;
        cima = cima->getSig();
        delete temp;
    }
}

void ListaPila::push(int valor) {
    NodoPila* nuevo = new NodoPila(valor, cima);
    cima = nuevo;
    cant++;
}

int ListaPila::pop() {
    if (estaVacia()) return -1;

    NodoPila* temp = cima;
    int valor = temp->getDato();
    cima = cima->getSig();
    delete temp;
    cant--;
    return valor;
}

int ListaPila::top() {
    if (estaVacia()) return -1;
    return cima->getDato();
}

bool ListaPila::estaVacia() {
    return cima == nullptr;
}

int ListaPila::tamano() {
    return cant;
}
