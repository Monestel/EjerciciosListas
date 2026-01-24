//Ejercicio 14 y 31

#include "Libro.h"

Libro::Libro(string isbn, string titulo, string autor, int anio, string categoria, double precio) {
    this->isbn = isbn;
    this->titulo = titulo;
    this->autor = autor;
    this->anio = anio;
    this->categoria = categoria;
    this->precio = precio;
    disponible = true;
    usuario = "";
}

//Ejercicio 14 y 31
Libro::Libro(string isbn, string titulo, string autor, int anio, bool disponible) {
    this->isbn = isbn;
    this->titulo = titulo;
    this->autor = autor;
    this->anio = anio;
    this->disponible = disponible;
    categoria = "";
    usuario = "";
    precio = 0;
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

bool Libro::estaDisponible() {
    return disponible;
}

string Libro::getCategoria() {
    return categoria;
}

string Libro::getUsuario() {
    return usuario;
}

double Libro::getPrecio() {
    return precio;
}

void Libro::prestar(string usuario) {
    disponible = false;
    this->usuario = usuario;
}

void Libro::devolver() {
    disponible = true;
    usuario = "";
}
