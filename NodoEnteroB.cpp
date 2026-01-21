//Ejercicio 1

#include "NodoEnteroB.h"

NodoEnteroB::NodoEnteroB(int valor, NodoEnteroB* sig) {
    this->valor = valor;
    this->sig = sig;
}

int NodoEnteroB::getValor() {
    return valor;
}

NodoEnteroB* NodoEnteroB::getSig() {
    return sig;
}

void NodoEnteroB::setSig(NodoEnteroB* sig) {
    this->sig = sig;
}
