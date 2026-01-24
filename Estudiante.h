//Ejercicio 12 y 33

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {

private:

    string nombre;
    string carnet;
    double promedio;
    string carrera;
    int semestre;
    int edad;

public:
    Estudiante(string nombre, string carnet, double promedio);
    Estudiante(string carnet, string nombre, int edad, double promedio, string carrera, int semestre);

    string getNombre();
    string getCarnet();
    double getPromedio();
    void setPromedio(double promedio);
    string getCarrera();
    int getSemestre();
    int getCantidad();
};

#endif //EJERCICIOSLISTAS_ESTUDIANTE_H