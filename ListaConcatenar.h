// Ejercicio 23

#ifndef LISTACONCATENAR_H
#define LISTACONCATENAR_H

class ListaConcatenar {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaConcatenar();
    ~ListaConcatenar();

    void agregarFinal(int v);
    void concatenar(ListaConcatenar* otra);
    ListaConcatenar* unir(ListaConcatenar* otra);
    void insertarLista(int posicion, ListaConcatenar* otra);
};

#endif //EJERCICIOSLISTAS_LISTACONCATENAR_H