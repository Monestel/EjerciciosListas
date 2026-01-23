//Ejercicio 11

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {

private:

    string nombre;
    int edad;
    string genero;

public:
    Persona(string nombre, int edad, string genero);

    string getNombre();
    int getEdad();
    string getGenero();
};

#endif //EJERCICIOSLISTAS_PERSONA_H