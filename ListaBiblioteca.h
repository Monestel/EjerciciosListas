// Ejercicio 14 y 31

#ifndef LISTABIBLIOTECA_H
#define LISTABIBLIOTECA_H

#include "Libro.h"

class ListaBiblioteca {

private:

    struct Nodo {
        Libro* libro;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaBiblioteca();
    ~ListaBiblioteca();

    void agregarLibro(Libro* l);
    Libro* buscarPorISBN(string isbn);
    Libro* buscarPorTitulo(string titulo);
    int contarLibrosPorAutor(string autor);

    bool prestarLibro(string isbn, string usuario);
    bool devolverLibro(string isbn);
    bool prestarLibro(string isbn);


    int contarDisponibles();
    int contarPrestados();

    ListaBiblioteca* librosPorCategoria(string categoria);
    ListaBiblioteca* librosPorAutor(string autor);

    double valorTotalBiblioteca();
    Libro* libroMasAntiguo();
    Libro* libroMasReciente();

};

#endif //EJERCICIOSLISTAS_LISTABIBLIOTECA_H