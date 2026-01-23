// Ejercicio 13

#include "ListaProductos.h"

ListaProductos::ListaProductos() {
    cabeza = nullptr;
}

ListaProductos::~ListaProductos() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp->producto;
        delete temp;
    }
}

void ListaProductos::agregarProducto(Producto* p) {
    Nodo* nuevo = new Nodo{p, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Producto* ListaProductos::buscarPorCodigo(string codigo) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getCodigo() == codigo)
            return aux->producto;
        aux = aux->sig;
    }
    return nullptr;
}

double ListaProductos::valorTotalInventario() {
    double total = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        total += aux->producto->getPrecio() * aux->producto->getStock();
        aux = aux->sig;
    }
    return total;
}

Producto* ListaProductos::productoMasCaro() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Producto* caro = aux->producto;

    while (aux != nullptr) {
        if (aux->producto->getPrecio() > caro->getPrecio())
            caro = aux->producto;
        aux = aux->sig;
    }
    return caro;
}

int ListaProductos::productosConStockBajo(int limite) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->producto->getStock() < limite)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

bool ListaProductos::actualizarStock(string codigo, int nuevoStock) {
    Producto* p = buscarPorCodigo(codigo);
    if (p == nullptr) return false;

    p->setStock(nuevoStock);
    return true;
}

double ListaProductos::gananciaTotal() {
    double total = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        total += aux->producto->getPrecio() * aux->producto->getStock();
        aux = aux->sig;
    }
    return total;
}
