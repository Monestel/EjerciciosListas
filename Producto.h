//Ejercicio 13 y 32

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
    string categoria;
    string proveedor;
    int ventas;

public:
    Producto(string codigo, string nombre, double precio, int stock);
    Producto(string codigo, string nombre, double precio, int stock, string categoria, string proveedor);

    string getCodigo();
    string getNombre();
    double getPrecio();
    int getStock();
    string getCategoria();
    string getProveedor();
    int getVentas();

    void aumentarStock(int cantidad);
    bool reducirStock(int cantidad);
    void registrarVenta(int cantidad);
};

#endif //EJERCICIOSLISTAS_PRODUCTO_H
