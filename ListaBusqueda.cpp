//Ejercicio 3

#include "ListaBusqueda.h"

ListaBusqueda::ListaBusqueda() {
    primero = nullptr;
}

ListaBusqueda::~ListaBusqueda() {
    while (primero != nullptr) {
        NodoBusqueda* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

void ListaBusqueda::agregarFinal(int valor) {
    NodoBusqueda* nuevo = new NodoBusqueda(valor, nullptr);

    if (primero == nullptr) {
        primero = nuevo;
    } else {
        NodoBusqueda* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(nuevo);
    }
}
