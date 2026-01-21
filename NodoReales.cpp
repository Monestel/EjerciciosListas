//Ejercicio 5

#include "NodoReales.h"

NodoReales::NodoReales(double d, NodoReales* s) {
    dato = d;
    sig = s;
}

NodoReales::~NodoReales() {
}

double NodoReales::getDato() {
    return dato;
}

NodoReales* NodoReales::getSig() {
    return sig;
}

void NodoReales::setSig(NodoReales* s) {
    sig = s;
}
