//Ejercicio 3

#ifndef NODOBUSQUEDA_H
#define NODOBUSQUEDA_H

class NodoBusqueda {

private:

    int valor;
    NodoBusqueda* sig;

public:
    NodoBusqueda(int valor, NodoBusqueda* sig);
    int getValor();
    NodoBusqueda* getSig();
    void setSig(NodoBusqueda* sig);
};

#endif //EJERCICIOSLISTAS_NODOBUSQUEDA_H
