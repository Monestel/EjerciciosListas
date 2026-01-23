// Ejercicio 20

#ifndef TRANSACCION_H
#define TRANSACCION_H

#include <string>
using namespace std;

class Transaccion {

private:

    int id;
    string tipo;
    double monto;
    string fecha;

public:
    Transaccion();
    Transaccion(int id, string tipo, double monto, string fecha);

    int getId();
    string getTipo();
    double getMonto();
    string getFecha();
};

#endif //EJERCICIOSLISTAS_TRANSACCION_H