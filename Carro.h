// Ejercicio 15

#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

class Carro {

private:

    string placa;
    string marca;
    int anio;
    double precio;

public:
    Carro();
    Carro(string placa, string marca, int anio, double precio);

    string getPlaca();
    string getMarca();
    int getAnio();
    double getPrecio();
};

#endif //EJERCICIOSLISTAS_CARRO_H