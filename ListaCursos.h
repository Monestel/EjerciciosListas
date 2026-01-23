// Ejercicio 19

#ifndef LISTACURSOS_H
#define LISTACURSOS_H

#include "Curso.h"

class ListaCursos {

private:

    struct Nodo {
        Curso curso;
        Nodo* sig;
    };

    Nodo* cabeza;

public:
    ListaCursos();
    ~ListaCursos();

    void agregarCurso(Curso c);
    Curso* buscarPorCodigo(string codigo);
    int totalCreditos();
    int contarPorProfesor(string profesor);
    ListaCursos* cursosPorProfesor(string profesor);
    Curso* cursoConMasCreditos();
    double promedioCreditos();
};

#endif //EJERCICIOSLISTAS_LISTACURSOS_H