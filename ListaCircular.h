// Ejercicio 30

#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

class ListaCircular {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* ultimo;

public:
    ListaCircular();
    ~ListaCircular();

    void agregar(int valor);
    bool eliminar(int valor);
    void recorrerCompleto();
    int contarElementos();
    bool buscar(int valor);
};

#endif //EJERCICIOSLISTAS_LISTACIRCULAR_H