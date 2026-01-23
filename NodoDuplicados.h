//Ejercicio 8

#ifndef NODODUPLICADOS_H
#define NODODUPLICADOS_H

class NodoDuplicados {

private:

    int dato;
    NodoDuplicados* sig;

public:
    NodoDuplicados(int d, NodoDuplicados* s);
    ~NodoDuplicados();

    int getDato();
    NodoDuplicados* getSig();
    void setSig(NodoDuplicados* s);
};

#endif //EJERCICIOSLISTAS_NODODUPLICADOS_H
