// Ejercicio 14

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

public:
    Libro();
    Libro(string isbn, string titulo, string autor, int anio, bool disponible);

    string getISBN();
    string getTitulo();
    string getAutor();
    int getAnio();
    bool getDisponible();

    void setDisponible(bool disponible);
};

#endif //EJERCICIOSLISTAS_LIBRO_H