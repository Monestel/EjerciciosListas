// Ejercicio 28

#include "ListaEstadisticas.h"
#include <cmath>

ListaEstadisticas::ListaEstadisticas() {
    cabeza = nullptr;
}

ListaEstadisticas::~ListaEstadisticas() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaEstadisticas::agregarFinal(int v) {
    Nodo* nuevo = new Nodo{v, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

int ListaEstadisticas::moda() {
    if (cabeza == nullptr) return 0;

    int mejorValor = cabeza->valor;
    int mejorCont = 0;

    Nodo* a = cabeza;
    while (a != nullptr) {
        int cont = 0;
        Nodo* b = cabeza;

        while (b != nullptr) {
            if (a->valor == b->valor)
                cont++;
            b = b->sig;
        }

        if (cont > mejorCont) {
            mejorCont = cont;
            mejorValor = a->valor;
        }
        a = a->sig;
    }
    return mejorValor;
}

double ListaEstadisticas::mediana() {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        cont++;
        aux = aux->sig;
    }

    if (cont == 0) return 0;

    int* arr = new int[cont];
    aux = cabeza;
    for (int i = 0; i < cont; i++) {
        arr[i] = aux->valor;
        aux = aux->sig;
    }

    for (int i = 0; i < cont - 1; i++) {
        for (int j = 0; j < cont - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    double med;
    if (cont % 2 == 0)
        med = (arr[cont / 2 - 1] + arr[cont / 2]) / 2.0;
    else
        med = arr[cont / 2];

    delete[] arr;
    return med;
}

double ListaEstadisticas::desviacionEstandar() {
    int cont = 0;
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->valor;
        cont++;
        aux = aux->sig;
    }

    if (cont == 0) return 0;

    double media = suma / cont;
    double acum = 0;

    aux = cabeza;
    while (aux != nullptr) {
        acum += (aux->valor - media) * (aux->valor - media);
        aux = aux->sig;
    }

    return sqrt(acum / cont);
}

int ListaEstadisticas::rango() {
    if (cabeza == nullptr) return 0;

    int min = cabeza->valor;
    int max = cabeza->valor;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->valor < min) min = aux->valor;
        if (aux->valor > max) max = aux->valor;
        aux = aux->sig;
    }
    return max - min;
}

ListaEstadisticas* ListaEstadisticas::obtenerTopN(int n) {
    ListaEstadisticas* top = new ListaEstadisticas();
    if (n <= 0) return top;

    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        cont++;
        aux = aux->sig;
    }

    int* arr = new int[cont];
    aux = cabeza;
    for (int i = 0; i < cont; i++) {
        arr[i] = aux->valor;
        aux = aux->sig;
    }

    for (int i = 0; i < cont - 1; i++) {
        for (int j = 0; j < cont - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n && i < cont; i++)
        top->agregarFinal(arr[i]);

    delete[] arr;
    return top;
}
