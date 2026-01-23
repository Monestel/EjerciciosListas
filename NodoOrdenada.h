//Ejercicio 9

#ifndef NODOORDENADA_H
#define NODOORDENADA_H

class NodoOrdenada {

private:

    int dato;
    NodoOrdenada* sig;

public:
    NodoOrdenada(int d, NodoOrdenada* s);
    ~NodoOrdenada();

    int getDato();
    NodoOrdenada* getSig();
    void setSig(NodoOrdenada* s);
};

#endif //EJERCICIOSLISTAS_NODOORDENADA_H