//Ejercicio 3

#include "NodoBusqueda.h"

NodoBusqueda::NodoBusqueda(int valor, NodoBusqueda* sig) {
    this->valor = valor;
    this->sig = sig;
}

int NodoBusqueda::getValor() {
    return valor;
}

NodoBusqueda* NodoBusqueda::getSig() {
    return sig;
}

void NodoBusqueda::setSig(NodoBusqueda* sig) {
    this->sig = sig;
}
