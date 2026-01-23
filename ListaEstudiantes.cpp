// Ejercicio 12

#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes() {
    cabeza = nullptr;
    contador = 0;
}

ListaEstudiantes::~ListaEstudiantes() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp->estudiante;
        delete temp;
    }
}

void ListaEstudiantes::agregarEstudiante(Estudiante* e) {
    Nodo* nuevo = new Nodo{e, nullptr};

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

Estudiante* ListaEstudiantes::buscarPorCarnet(string carnet) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->estudiante->getCarnet() == carnet)
            return aux->estudiante;
        aux = aux->sig;
    }
    return nullptr;
}

double ListaEstudiantes::promedioGrupo() {
    if (contador == 0) return 0;

    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->estudiante->getPromedio();
        aux = aux->sig;
    }
    return suma / contador;
}

int ListaEstudiantes::contarAprobados(double notaMinima) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() >= notaMinima)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

int ListaEstudiantes::contarReprobados(double notaMinima) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() < notaMinima)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

Estudiante* ListaEstudiantes::mejorEstudiante() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Estudiante* mejor = aux->estudiante;

    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() > mejor->getPromedio())
            mejor = aux->estudiante;
        aux = aux->sig;
    }
    return mejor;
}

void ListaEstudiantes::aplicarCurva(double porcentaje) {
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        double nuevo = aux->estudiante->getPromedio();
        nuevo += nuevo * (porcentaje / 100.0);
        aux->estudiante->setPromedio(nuevo);
        aux = aux->sig;
    }
}
