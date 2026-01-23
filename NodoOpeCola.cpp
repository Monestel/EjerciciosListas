//Ejercicio 7

#include "NodoOpeCola.h"

NodoCola::NodoCola(int d, NodoCola* s) {
    dato = d;
    sig = s;
}

NodoCola::~NodoCola() {
}

int NodoCola::getDato() {
    return dato;
}

NodoCola* NodoCola::getSig() {
    return sig;
}

void NodoCola::setSig(NodoCola* s) {
    sig = s;
}
