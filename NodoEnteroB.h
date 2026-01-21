//Ejercicio 1

#ifndef NODOENTEROB_H
#define NODOENTEROB_H

class NodoEnteroB {

private:

    int valor;
    NodoEnteroB* sig;

public:
    NodoEnteroB(int valor, NodoEnteroB* sig);
    int getValor();
    NodoEnteroB* getSig();
    void setSig(NodoEnteroB* sig);
};

#endif //EJERCICIOSLISTAS_NODOENTEROB_H
