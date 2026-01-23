//Ejercicio 9

#include "NodoOrdenada.h"

NodoOrdenada::NodoOrdenada(int d, NodoOrdenada* s) {
    dato = d;
    sig = s;
}

NodoOrdenada::~NodoOrdenada() {
}

int NodoOrdenada::getDato() {
    return dato;
}

NodoOrdenada* NodoOrdenada::getSig() {
    return sig;
}

void NodoOrdenada::setSig(NodoOrdenada* s) {
    sig = s;
}
