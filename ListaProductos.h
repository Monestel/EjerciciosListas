// Ejercicio 13

#ifndef LISTAPRODUCTOS_H
#define LISTAPRODUCTOS_H

#include "Producto.h"

class ListaProductos {

private:

    struct Nodo {
        Producto* producto;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaProductos();
    ~ListaProductos();

    void agregarProducto(Producto* p);
    Producto* buscarPorCodigo(string codigo);
    double valorTotalInventario();
    Producto* productoMasCaro();
    int productosConStockBajo(int limite);
    bool actualizarStock(string codigo, int nuevoStock);
    double gananciaTotal();
};

#endif //EJERCICIOSLISTAS_LISTAPRODUCTOS_H