// Ejercicio 14

#include "ListaBiblioteca.h"

ListaBiblioteca::ListaBiblioteca() {
    cabeza = nullptr;
}

ListaBiblioteca::~ListaBiblioteca() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaBiblioteca::agregarLibro(Libro l) {
    Nodo* nuevo = new Nodo{l, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Libro* ListaBiblioteca::buscarPorISBN(string isbn) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro.getISBN() == isbn)
            return &aux->libro;
        aux = aux->sig;
    }
    return nullptr;
}

Libro* ListaBiblioteca::buscarPorTitulo(string titulo) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro.getTitulo() == titulo)
            return &aux->libro;
        aux = aux->sig;
    }
    return nullptr;
}

int ListaBiblioteca::contarLibrosPorAutor(string autor) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->libro.getAutor() == autor)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

int ListaBiblioteca::contarDisponibles() {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->libro.getDisponible())
            cont++;
        aux = aux->sig;
    }
    return cont;
}

bool ListaBiblioteca::prestarLibro(string isbn) {
    Libro* l = buscarPorISBN(isbn);
    if (l == nullptr || !l->getDisponible())
        return false;

    l->setDisponible(false);
    return true;
}

bool ListaBiblioteca::devolverLibro(string isbn) {
    Libro* l = buscarPorISBN(isbn);
    if (l == nullptr || l->getDisponible())
        return false;

    l->setDisponible(true);
    return true;
}

ListaBiblioteca* ListaBiblioteca::librosPorAutor(string autor) {
    ListaBiblioteca* lista = new ListaBiblioteca();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->libro.getAutor() == autor)
            lista->agregarLibro(aux->libro);
        aux = aux->sig;
    }
    return lista;
}
