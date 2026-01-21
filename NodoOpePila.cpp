//Ejercicio 6

#include "NodooPEPila.h"

NodoPila::NodoPila(int d, NodoPila* s) {
    dato = d;
    sig = s;
}

NodoPila::~NodoPila() {
}

int NodoPila::getDato() {
    return dato;
}

NodoPila* NodoPila::getSig() {
    return sig;
}

void NodoPila::setSig(NodoPila* s) {
    sig = s;
}
