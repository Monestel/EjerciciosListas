// Ejercicio 26

#ifndef LISTAORDENAR_H
#define LISTAORDENAR_H

class ListaOrdenar {

private:
    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaOrdenar();
    ~ListaOrdenar();

    void agregarFinal(int v);
    void ordenarBurbuja();
    void ordenarSeleccion();
    void ordenarInsercion();
    bool estaOrdenada();
};

#endif //EJERCICIOSLISTAS_LISTAORDENAR_H