//Ejercicio 11

#include "ListaPersonas.h"

ListaPersonas::ListaPersonas() {
    cabeza = nullptr;
    contador = 0;
}

ListaPersonas::~ListaPersonas() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp->persona;
        delete temp;
    }
}

void ListaPersonas::agregarPersona(Persona* p) {
    Nodo* nuevo = new Nodo{p, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
    contador++;
}

Persona* ListaPersonas::buscarPorNombre(string nombre) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->persona->getNombre() == nombre)
            return aux->persona;
        aux = aux->sig;
    }
    return nullptr;
}

int ListaPersonas::contarPorGenero(string genero) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->persona->getGenero() == genero)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

double ListaPersonas::promedioEdades() {
    if (contador == 0) return 0;

    int suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->persona->getEdad();
        aux = aux->sig;
    }
    return (double)suma / contador;
}

Persona* ListaPersonas::personaMasJoven() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Persona* joven = aux->persona;

    while (aux != nullptr) {
        if (aux->persona->getEdad() < joven->getEdad())
            joven = aux->persona;
        aux = aux->sig;
    }
    return joven;
}

Persona* ListaPersonas::personaMasVieja() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Persona* vieja = aux->persona;

    while (aux != nullptr) {
        if (aux->persona->getEdad() > vieja->getEdad())
            vieja = aux->persona;
        aux = aux->sig;
    }
    return vieja;
}

int ListaPersonas::contarMayoresDe(int edad) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->persona->getEdad() > edad)
            cont++;
        aux = aux->sig;
    }
    return cont;
}
