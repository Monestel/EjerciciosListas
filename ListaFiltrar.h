// Ejercicio 27

#ifndef LISTAFILTRAR_H
#define LISTAFILTRAR_H

class ListaFiltrar {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaFiltrar();
    ~ListaFiltrar();

    void agregarFinal(int v);
    ListaFiltrar* filtrarPares();
    ListaFiltrar* filtrarImpares();
    ListaFiltrar* filtrarMayores(int valor);
    ListaFiltrar* filtrarMenores(int valor);
};

#endif //EJERCICIOSLISTAS_LISTAFILTRAR_H