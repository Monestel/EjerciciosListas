// Ejercicio 18

#ifndef RESERVA_H
#define RESERVA_H

#include <string>
using namespace std;

class Reserva {

private:

    int id;
    string cliente;
    string fecha;
    double monto;
    string estado;

public:
    Reserva();
    Reserva(int id, string cliente, string fecha, double monto, string estado);

    int getId();
    string getCliente();
    string getFecha();
    double getMonto();
    string getEstado();

    void setEstado(string estado);
};

#endif //EJERCICIOSLISTAS_RESERVA_H