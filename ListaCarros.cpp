// Ejercicio 15

#include "ListaCarros.h"

ListaCarros::ListaCarros() {
    cabeza = nullptr;
}

ListaCarros::~ListaCarros() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaCarros::insertarOrdenado(Carro c) {
    Nodo* nuevo = new Nodo{c, nullptr};

    if (cabeza == nullptr || c.getAnio() < cabeza->carro.getAnio()) {
        nuevo->sig = cabeza;
        cabeza = nuevo;
        return;
    }

    Nodo* aux = cabeza;
    while (aux->sig != nullptr && aux->sig->carro.getAnio() <= c.getAnio())
        aux = aux->sig;

    nuevo->sig = aux->sig;
    aux->sig = nuevo;
}

bool ListaCarros::eliminarPorPlaca(string placa) {
    if (cabeza == nullptr) return false;

    if (cabeza->carro.getPlaca() == placa) {
        Nodo* temp = cabeza;
        cabeza = cabeza->sig;
        delete temp;
        return true;
    }

    Nodo* aux = cabeza;
    while (aux->sig != nullptr) {
        if (aux->sig->carro.getPlaca() == placa) {
            Nodo* temp = aux->sig;
            aux->sig = temp->sig;
            delete temp;
            return true;
        }
        aux = aux->sig;
    }
    return false;
}

Carro* ListaCarros::buscarPorPlaca(string placa) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->carro.getPlaca() == placa)
            return &aux->carro;
        aux = aux->sig;
    }
    return nullptr;
}

int ListaCarros::contarPorMarca(string marca) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->carro.getMarca() == marca)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

Carro* ListaCarros::carroMasViejo() {
    if (cabeza == nullptr) return nullptr;
    return &cabeza->carro;
}

Carro* ListaCarros::carroMasNuevo() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    while (aux->sig != nullptr)
        aux = aux->sig;

    return &aux->carro;
}

double ListaCarros::precioPromedio() {
    if (cabeza == nullptr) return 0;

    double suma = 0;
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->carro.getPrecio();
        cont++;
        aux = aux->sig;
    }
    return suma / cont;
}
