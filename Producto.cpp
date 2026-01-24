//Ejercicio 13 y 32
#include "Producto.h"

Producto::Producto(string codigo, string nombre, double precio, int stock) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    categoria = "";
    proveedor = "";
    ventas = 0;
}

Producto::Producto(string codigo, string nombre, double precio, int stock, string categoria, string proveedor) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    this->categoria = categoria;
    this->proveedor = proveedor;
    ventas = 0;
}

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
double Producto::getPrecio() { return precio; }
int Producto::getStock() { return stock; }
string Producto::getCategoria() { return categoria; }
string Producto::getProveedor() { return proveedor; }
int Producto::getVentas() { return ventas; }

void Producto::aumentarStock(int cantidad) {
    stock += cantidad;
}

bool Producto::reducirStock(int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
        return true;
    }
    return false;
}

void Producto::registrarVenta(int cantidad) {
    ventas += cantidad;
}
