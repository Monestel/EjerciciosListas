// Ejercicio 22

#ifndef LISTACOMPARAR_H
#define LISTACOMPARAR_H

class ListaComparar {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaComparar();
    ~ListaComparar();

    void agregarFinal(int v);
    bool sonIguales(ListaComparar* otra);
    bool contiene(ListaComparar* otra);
    ListaComparar* diferencia(ListaComparar* otra);
    ListaComparar* interseccion(ListaComparar* otra);
};

#endif //EJERCICIOSLISTAS_LISTACOMPARAR_H