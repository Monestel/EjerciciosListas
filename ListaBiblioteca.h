// Ejercicio 14

#ifndef LISTABIBLIOTECA_H
#define LISTABIBLIOTECA_H

#include "Libro.h"

class ListaBiblioteca {

private:

    struct Nodo {
        Libro libro;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaBiblioteca();
    ~ListaBiblioteca();

    void agregarLibro(Libro l);
    Libro* buscarPorISBN(string isbn);
    Libro* buscarPorTitulo(string titulo);
    int contarLibrosPorAutor(string autor);
    int contarDisponibles();
    bool prestarLibro(string isbn);
    bool devolverLibro(string isbn);
    ListaBiblioteca* librosPorAutor(string autor);
};

#endif //EJERCICIOSLISTAS_LISTABIBLIOTECA_H