//Ejercicio 10

#ifndef NODORANGO_H
#define NODORANGO_H

class NodoRango {

private:

    int dato;
    NodoRango* sig;

public:
    NodoRango(int d, NodoRango* s);
    ~NodoRango();

    int getDato();
    NodoRango* getSig();
    void setSig(NodoRango* s);
};

#endif //EJERCICIOSLISTAS_NODORANGO_H
