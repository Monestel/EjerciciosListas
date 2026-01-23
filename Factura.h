// Ejercicio 17

#ifndef FACTURA_H
#define FACTURA_H

#include <string>
using namespace std;

class Factura {

private:

    int numero;
    string cliente;
    double monto;
    string fecha;

public:
    Factura();
    Factura(int numero, string cliente, double monto, string fecha);

    int getNumero();
    string getCliente();
    double getMonto();
    string getFecha();
};

#endif //EJERCICIOSLISTAS_FACTURA_H