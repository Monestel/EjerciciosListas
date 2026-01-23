//Ejercicio 12

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {

private:

    string nombre;
    string carnet;
    double promedio;

public:
    Estudiante(string nombre, string carnet, double promedio);
    string getNombre();
    string getCarnet();
    double getPromedio();
    void setPromedio(double promedio);
};

#endif //EJERCICIOSLISTAS_ESTUDIANTE_H