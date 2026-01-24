// Ejercicio 12

#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H

#include "Estudiante.h"

class ListaEstudiantes {

private:

    struct Nodo {
        Estudiante* estudiante;
        Nodo* sig;
    };

    Nodo* cabeza;
    int contador;

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

    double promedioGeneral();
    double promedioPorCarrera(string carrera);
    int contarPorCarrera(string carrera);
    int contarPorSemestre(int semestre);
    ListaEstudiantes* estudiantesAprobados(double notaMinima);
    Estudiante* mejorEstudiantePorCarrera(string carrera);
    int getContador();


};

#endif //EJERCICIOSLISTAS_LISTAESTUDIANTES_H
