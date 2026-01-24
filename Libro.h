//Ejercicio 14 y 31

#ifndef LIBRO_H
#define LIBRO_H

#include <string>
using namespace std;

class Libro {

private:
    string isbn;
    string titulo;
    string autor;
    int anio;
    bool disponible;
    string categoria;
    string usuario;
    double precio;

public:
    Libro(string isbn, string titulo, string autor, int anio, bool disponible);
    Libro(string isbn, string titulo, string autor, int anio, string categoria, double precio);



    string getISBN();
    string getTitulo();
    string getAutor();
    int getAnio();
    bool estaDisponible();
    string getCategoria();
    string getUsuario();
    double getPrecio();

    void prestar(string usuario);
    void devolver();
};

#endif //EJERCICIOSLISTAS_LIBRO_H