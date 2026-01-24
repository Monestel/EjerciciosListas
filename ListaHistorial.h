// Ejercicio 29

#ifndef LISTAHISTORIAL_H
#define LISTAHISTORIAL_H

class ListaHistorial {

private:

    struct Nodo {
        int valor;
        Nodo* sig;
    };

    struct Estado {
        Nodo* lista;
        Estado* sig;
    };

    Nodo* cabeza;
    Estado* undo;
    Estado* redo;

    Nodo* copiarLista(Nodo* l);
    void guardarEstado();
    void liberarLista(Nodo* l);
    void limpiarPila(Estado*& p);

public:
    ListaHistorial();
    ~ListaHistorial();

    void agregarFinal(int v);
    void eliminarInicio();

    void deshacer();
    void rehacer();
    int historialDisponible();
    void limpiarHistorial();
};

#endif //EJERCICIOSLISTAS_LISTAHISTORIAL_H