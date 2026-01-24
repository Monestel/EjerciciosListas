// Ejercicio 28

#ifndef LISTAESTADISTICAS_H
#define LISTAESTADISTICAS_H

class ListaEstadisticas {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaEstadisticas();
    ~ListaEstadisticas();

    void agregarFinal(int v);
    int moda();
    double mediana();
    double desviacionEstandar();
    int rango();
    ListaEstadisticas* obtenerTopN(int n);
};

#endif //EJERCICIOSLISTAS_LISTAESTADISTICAS_H