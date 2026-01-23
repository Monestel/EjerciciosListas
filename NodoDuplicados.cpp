//Ejercicio 8

#include "NodoDuplicados.h"

NodoDuplicados::NodoDuplicados(int d, NodoDuplicados* s) {
    dato = d;
    sig = s;
}

NodoDuplicados::~NodoDuplicados() {
}

int NodoDuplicados::getDato() {
    return dato;
}

NodoDuplicados* NodoDuplicados::getSig() {
    return sig;
}

void NodoDuplicados::setSig(NodoDuplicados* s) {
    sig = s;
}
