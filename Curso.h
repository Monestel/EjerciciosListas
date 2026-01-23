// Ejercicio 19

#ifndef CURSO_H
#define CURSO_H

#include <string>
using namespace std;

class Curso {

private:

    string codigo;
    string nombre;
    int creditos;
    string profesor;

public:
    Curso();
    Curso(string codigo, string nombre, int creditos, string profesor);

    string getCodigo();
    string getNombre();
    int getCreditos();
    string getProfesor();
};

#endif //EJERCICIOSLISTAS_CURSO_H