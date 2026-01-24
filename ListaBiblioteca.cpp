//Ejercicio 14 y 31

#include "ListaBiblioteca.h"

ListaBiblioteca::ListaBiblioteca() {
    cabeza = nullptr;
}

ListaBiblioteca::~ListaBiblioteca() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp->libro;
        delete temp;
    }
}

void ListaBiblioteca::agregarLibro(Libro* l) {
    Nodo* nuevo = new Nodo{l, nullptr};
    if (cabeza == nullptr)
        cabeza = nuevo;
    else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Libro* ListaBiblioteca::buscarPorISBN(string isbn) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro->getISBN() == isbn)
            return aux->libro;
        aux = aux->sig;
    }
    return nullptr;
}

Libro* ListaBiblioteca::buscarPorTitulo(string titulo) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro->getTitulo() == titulo)
            return aux->libro;
        aux = aux->sig;
    }
    return nullptr;
}

bool ListaBiblioteca::prestarLibro(string isbn, string usuario) {
    Libro* l = buscarPorISBN(isbn);
    if (l != nullptr && l->estaDisponible()) {
        l->prestar(usuario);
        return true;
    }
    return false;
}

bool ListaBiblioteca::devolverLibro(string isbn) {
    Libro* l = buscarPorISBN(isbn);
    if (l != nullptr && !l->estaDisponible()) {
        l->devolver();
        return true;
    }
    return false;
}

int ListaBiblioteca::contarDisponibles() {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro->estaDisponible())
            cont++;
        aux = aux->sig;
    }
    return cont;
}

int ListaBiblioteca::contarPrestados() {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (!aux->libro->estaDisponible())
            cont++;
        aux = aux->sig;
    }
    return cont;
}

ListaBiblioteca* ListaBiblioteca::librosPorCategoria(string categoria) {
    ListaBiblioteca* nueva = new ListaBiblioteca();
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro->getCategoria() == categoria)
            nueva->agregarLibro(new Libro(
                aux->libro->getISBN(),
                aux->libro->getTitulo(),
                aux->libro->getAutor(),
                aux->libro->getAnio(),
                aux->libro->getCategoria(),
                aux->libro->getPrecio()
            ));
        aux = aux->sig;
    }
    return nueva;
}

ListaBiblioteca* ListaBiblioteca::librosPorAutor(string autor) {
    ListaBiblioteca* nueva = new ListaBiblioteca();
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro->getAutor() == autor)
            nueva->agregarLibro(new Libro(
                aux->libro->getISBN(),
                aux->libro->getTitulo(),
                aux->libro->getAutor(),
                aux->libro->getAnio(),
                aux->libro->getCategoria(),
                aux->libro->getPrecio()
            ));
        aux = aux->sig;
    }
    return nueva;
}

double ListaBiblioteca::valorTotalBiblioteca() {
    double total = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        total += aux->libro->getPrecio();
        aux = aux->sig;
    }
    return total;
}

Libro* ListaBiblioteca::libroMasAntiguo() {
    if (cabeza == nullptr) return nullptr;
    Nodo* aux = cabeza;
    Libro* ant = aux->libro;
    while (aux != nullptr) {
        if (aux->libro->getAnio() < ant->getAnio())
            ant = aux->libro;
        aux = aux->sig;
    }
    return ant;
}

Libro* ListaBiblioteca::libroMasReciente() {
    if (cabeza == nullptr) return nullptr;
    Nodo* aux = cabeza;
    Libro* rec = aux->libro;
    while (aux != nullptr) {
        if (aux->libro->getAnio() > rec->getAnio())
            rec = aux->libro;
        aux = aux->sig;
    }
    return rec;

}

bool ListaBiblioteca::prestarLibro(string isbn) {
    return prestarLibro(isbn, "");
}

int ListaBiblioteca::contarLibrosPorAutor(string autor) {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->libro->getAutor() == autor)
            cont++;
        aux = aux->sig;
    }
    return cont;
}
