// Ejercicio 13

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {

private:

    string codigo;
    string nombre;
    double precio;
    int stock;

public:
    Producto(string codigo, string nombre, double precio, int stock);

    string getCodigo();
    string getNombre();
    double getPrecio();
    int getStock();

    void setStock(int stock);
};

#endif //EJERCICIOSLISTAS_PRODUCTO_H
