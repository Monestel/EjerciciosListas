//Ejercicio 5

#ifndef NODOREALES_H
#define NODOREALES_H

class NodoReales {

private:

    double dato;
    NodoReales* sig;

public:
    NodoReales(double d, NodoReales* s);
    ~NodoReales();

    double getDato();
    NodoReales* getSig();
    void setSig(NodoReales* s);
};

#endif //EJERCICIOSLISTAS_NODOREALES_H
