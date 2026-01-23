// Ejercicio 14

#include "Libro.h"

Libro::Libro() {
    disponible = true;
}

Libro::Libro(string isbn, string titulo, string autor, int anio, bool disponible) {
    this->isbn = isbn;
    this->titulo = titulo;
    this->autor = autor;
    this->anio = anio;
    this->disponible = disponible;
}

string Libro::getISBN() {
    return isbn;
}

string Libro::getTitulo() {
    return titulo;
}

string Libro::getAutor() {
    return autor;
}

int Libro::getAnio() {
    return anio;
}

bool Libro::getDisponible() {
    return disponible;
}

void Libro::setDisponible(bool disponible) {
    this->disponible = disponible;
}
