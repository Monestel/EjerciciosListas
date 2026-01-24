//Ejercicio 32

#include "ListaProductos.h"

ListaProductos::ListaProductos() {
    cabeza = nullptr;
}

ListaProductos::~ListaProductos() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp->producto;
        delete temp;
    }
}

void ListaProductos::agregarProducto(Producto* p) {
    Nodo* nuevo = new Nodo{p, nullptr};
    if (cabeza == nullptr)
        cabeza = nuevo;
    else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Producto* ListaProductos::buscarPorCodigo(string codigo) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getCodigo() == codigo)
            return aux->producto;
        aux = aux->sig;
    }
    return nullptr;
}

bool ListaProductos::venderProducto(string codigo, int cantidad) {
    Producto* p = buscarPorCodigo(codigo);
    if (p != nullptr && p->reducirStock(cantidad)) {
        p->registrarVenta(cantidad);
        return true;
    }
    return false;
}

bool ListaProductos::reponerProducto(string codigo, int cantidad) {
    Producto* p = buscarPorCodigo(codigo);
    if (p != nullptr) {
        p->aumentarStock(cantidad);
        return true;
    }
    return false;
}

int ListaProductos::productosAgotados() {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getStock() == 0)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

double ListaProductos::valorTotalInventario() {
    double total = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        total += aux->producto->getPrecio() * aux->producto->getStock();
        aux = aux->sig;
    }
    return total;
}

ListaProductos* ListaProductos::productosPorCategoria(string categoria) {
    ListaProductos* nueva = new ListaProductos();
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getCategoria() == categoria)
            nueva->agregarProducto(new Producto(
                aux->producto->getCodigo(),
                aux->producto->getNombre(),
                aux->producto->getPrecio(),
                aux->producto->getStock(),
                aux->producto->getCategoria(),
                aux->producto->getProveedor()
            ));
        aux = aux->sig;
    }
    return nueva;
}

ListaProductos* ListaProductos::productosPorProveedor(string proveedor) {
    ListaProductos* nueva = new ListaProductos();
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getProveedor() == proveedor)
            nueva->agregarProducto(new Producto(
                aux->producto->getCodigo(),
                aux->producto->getNombre(),
                aux->producto->getPrecio(),
                aux->producto->getStock(),
                aux->producto->getCategoria(),
                aux->producto->getProveedor()
            ));
        aux = aux->sig;
    }
    return nueva;
}

Producto* ListaProductos::productoMasVendido() {
    if (cabeza == nullptr) return nullptr;
    Nodo* aux = cabeza;
    Producto* max = aux->producto;
    while (aux != nullptr) {
        if (aux->producto->getVentas() > max->getVentas())
            max = aux->producto;
        aux = aux->sig;
    }
    return max;
}

double ListaProductos::gananciaTotal() {
    double total = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        total += aux->producto->getPrecio() * aux->producto->getStock();
        aux = aux->sig;
    }
    return total;
}

Producto* ListaProductos::productoMasCaro() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Producto* caro = aux->producto;

    while (aux != nullptr) {
        if (aux->producto->getPrecio() > caro->getPrecio())
            caro = aux->producto;
        aux = aux->sig;
    }
    return caro;
}

int ListaProductos::productosConStockBajo(int limite) {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getStock() < limite)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

bool ListaProductos::actualizarStock(string codigo, int cantidad) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->producto->getCodigo() == codigo) {
            aux->producto->aumentarStock(cantidad);
            return true;
        }
        aux = aux->sig;
    }
    return false;
}
