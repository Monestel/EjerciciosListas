//Ejercicio 7

#ifndef NODOOPECOLA_H
#define NODOOPECOLA_H

class NodoCola {

private:

    int dato;
    NodoCola* sig;

public:
    NodoCola(int d, NodoCola* s);
    ~NodoCola();

    int getDato();
    NodoCola* getSig();
    void setSig(NodoCola* s);
};

#endif //EJERCICIOSLISTAS_NODOOPECOLA_H
