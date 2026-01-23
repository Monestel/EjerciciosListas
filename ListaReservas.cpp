// Ejercicio 18

#include "ListaReservas.h"

ListaReservas::ListaReservas() {
    cabeza = nullptr;
}

ListaReservas::~ListaReservas() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaReservas::agregarReserva(Reserva r) {
    Nodo* nuevo = new Nodo{r, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Reserva* ListaReservas::buscarPorId(int id) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->reserva.getId() == id)
            return &aux->reserva;
        aux = aux->sig;
    }
    return nullptr;
}

int ListaReservas::contarPorEstado(string estado) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->reserva.getEstado() == estado)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

double ListaReservas::montoTotalReservas() {
    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->reserva.getMonto();
        aux = aux->sig;
    }
    return suma;
}

bool ListaReservas::cambiarEstado(int id, string nuevoEstado) {
    Reserva* r = buscarPorId(id);
    if (r == nullptr) return false;

    r->setEstado(nuevoEstado);
    return true;
}

ListaReservas* ListaReservas::reservasPorCliente(string cliente) {
    ListaReservas* lista = new ListaReservas();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->reserva.getCliente() == cliente)
            lista->agregarReserva(aux->reserva);
        aux = aux->sig;
    }
    return lista;
}

int ListaReservas::contarConfirmadas() {
    return contarPorEstado("confirmada");
}
