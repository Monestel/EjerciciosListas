//Ejercicio 4

#include "NodoCaracter.h"

NodoCaracter::NodoCaracter(char valor, NodoCaracter* sig) {
    this->valor = valor;
    this->sig = sig;
}

char NodoCaracter::getValor() {
    return valor;
}

NodoCaracter* NodoCaracter::getSig() {
    return sig;
}

void NodoCaracter::setSig(NodoCaracter* sig) {
    this->sig = sig;
}
