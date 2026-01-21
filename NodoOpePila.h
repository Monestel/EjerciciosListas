//Ejercicio 6

#ifndef NODOOPEPILA_H
#define NODOOPEPILA_H

class NodoPila {

private:

    int dato;
    NodoPila* sig;

public:
    NodoPila(int d, NodoPila* s);
    ~NodoPila();

    int getDato();
    NodoPila* getSig();
    void setSig(NodoPila* s);
};

#endif //EJERCICIOSLISTAS_NODOOPEPILA_H
