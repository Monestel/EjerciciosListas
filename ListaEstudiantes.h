//Ejercicio 12

#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H

#include "Estudiante.h"

class ListaEstudiantes {

private:

    class Nodo {
    public:
        Estudiante* estudiante;
        Nodo* sig;
        Nodo(Estudiante* e) {
            estudiante = e;
            sig = nullptr;
        }
    };

    Nodo* primero;
    int cantidad;

public:
    ListaEstudiantes();
    ~ListaEstudiantes();
    void agregarEstudiante(Estudiante* e);
    Estudiante* buscarPorCarnet(string carnet);
    double promedioGrupo();
    int contarAprobados(double notaMinima);
    int contarReprobados(double notaMinima);
    Estudiante* mejorEstudiante();
    void aplicarCurva(double porcentaje);
};

#endif //EJERCICIOSLISTAS_LISTAESTUDIANTE_H
