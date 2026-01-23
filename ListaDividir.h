// Ejercicio 24

#ifndef LISTADIVIDIR_H
#define LISTADIVIDIR_H

class ListaDividir {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaDividir();
    ~ListaDividir();

    void agregarFinal(int v);
    ListaDividir* dividir(int posicion);
    ListaDividir* obtenerPrimeraMitad();
    ListaDividir* obtenerSegundaMitad();
    void eliminarMitad();
};

#endif //EJERCICIOSLISTAS_LISTADIVIDIR_H