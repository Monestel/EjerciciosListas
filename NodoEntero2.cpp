//Ejercicio 2

#include "NodoEntero2.h"

NodoEntero2::NodoEntero2(int valor, NodoEntero2* sig) {
    this->valor = valor;
    this->sig = sig;
}

int NodoEntero2::getValor() {
    return valor;
}

NodoEntero2* NodoEntero2::getSig() {
    return sig;
}

void NodoEntero2::setSig(NodoEntero2* sig) {
    this->sig = sig;
}
