//Ejercicio 4

#include "ListaCaracter.h"

ListaCaracteres::ListaCaracteres() {
    primero = nullptr;
    ultimo = nullptr;
}

ListaCaracteres::~ListaCaracteres() {
    while (primero != nullptr) {
        NodoCaracter* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

void ListaCaracteres::agregarInicio(char c) {
    NodoCaracter* nuevo = new NodoCaracter(c, primero);

    if (primero == nullptr) {
        ultimo = nuevo;
    }

    primero = nuevo;
}

void ListaCaracteres::agregarFinal(char c) {
    NodoCaracter* nuevo = new NodoCaracter(c, nullptr);

    if (primero == nullptr) {
        primero = ultimo = nuevo;
    } else {
        ultimo->setSig(nuevo);
        ultimo = nuevo;
    }
}

int ListaCaracteres::contarCaracter(char c) {
    int cont = 0;
    NodoCaracter* actual = primero;

    while (actual != nullptr) {
        if (actual->getValor() == c)
            cont++;
        actual = actual->getSig();
    }

    return cont;
}

string ListaCaracteres::obtenerCadena() {
    string cad = "";
    NodoCaracter* actual = primero;

    while (actual != nullptr) {
        cad += actual->getValor();
        actual = actual->getSig();
    }

    return cad;
}

bool ListaCaracteres::esPalindromo() {
    string cad = obtenerCadena();
    int i = 0;
    int j = cad.length() - 1;

    while (i < j) {
        if (cad[i] != cad[j])
            return false;
        i++;
        j--;
    }

    return true;
}

void ListaCaracteres::invertir() {
    NodoCaracter* prev = nullptr;
    NodoCaracter* actual = primero;
    NodoCaracter* sig = nullptr;

    ultimo = primero;

    while (actual != nullptr) {
        sig = actual->getSig();
        actual->setSig(prev);
        prev = actual;
        actual = sig;
    }

    primero = prev;
}
