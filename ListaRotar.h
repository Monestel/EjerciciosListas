// Ejercicio 25

#ifndef LISTAROTAR_H
#define LISTAROTAR_H

class ListaRotar {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaRotar();
    ~ListaRotar();

    void agregarFinal(int v);
    void rotarIzquierda(int posiciones);
    void rotarDerecha(int posiciones);
    void rotarHasta(int valor);
};

#endif //EJERCICIOSLISTAS_LISTAROTAR_H