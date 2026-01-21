//Ejercicio 2

#ifndef NODOENTERO2_H
#define NODOENTERO2_H

class NodoEntero2 {

private:

    int valor;
    NodoEntero2* sig;

public:
    NodoEntero2(int valor, NodoEntero2* sig);
    int getValor();
    NodoEntero2* getSig();
    void setSig(NodoEntero2* sig);
};

#endif //EJERCICIOSLISTAS_NODOENTERO2_H
