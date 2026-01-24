// Ejercicio 13 y 32

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

    bool venderProducto(string codigo, int cantidad);
    bool reponerProducto(string codigo, int cantidad);

    int productosAgotados();
    double valorTotalInventario();

    ListaProductos* productosPorCategoria(string categoria);
    ListaProductos* productosPorProveedor(string proveedor);

    Producto* productoMasVendido();

    double gananciaTotal();
    Producto* productoMasCaro();
    int productosConStockBajo(int limite);
    bool actualizarStock(string codigo, int cantidad);
};

#endif //EJERCICIOSLISTAS_LISTAPRODUCTOS_H