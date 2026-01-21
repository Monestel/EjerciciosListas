//Ejercicio 4

#ifndef NODOCARACTER_H
#define NODOCARACTER_H

class NodoCaracter {

private:

    char valor;
    NodoCaracter* sig;

public:
    NodoCaracter(char valor, NodoCaracter* sig);
    char getValor();
    NodoCaracter* getSig();
    void setSig(NodoCaracter* sig);
};

#endif //EJERCICIOSLISTAS_NODOCARACTER_H
