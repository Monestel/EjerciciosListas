//Ejercicio 10

#include "NodoRango.h"

NodoRango::NodoRango(int d, NodoRango* s) {
    dato = d;
    sig = s;
}

NodoRango::~NodoRango() {
}

int NodoRango::getDato() {
    return dato;
}

NodoRango* NodoRango::getSig() {
    return sig;
}

void NodoRango::setSig(NodoRango* s) {
    sig = s;
}
