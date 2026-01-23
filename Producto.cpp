// Ejercicio 13

#include "Producto.h"

Producto::Producto(string codigo, string nombre, double precio, int stock) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
}

string Producto::getCodigo() {
    return codigo;
}

string Producto::getNombre() {
    return nombre;
}

double Producto::getPrecio() {
    return precio;
}

int Producto::getStock() {
    return stock;
}

void Producto::setStock(int stock) {
    this->stock = stock;
}
