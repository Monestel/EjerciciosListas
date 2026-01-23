// Ejercicio 19

#include "ListaCursos.h"

ListaCursos::ListaCursos() {
    cabeza = nullptr;
}

ListaCursos::~ListaCursos() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp;
    }
}

void ListaCursos::agregarCurso(Curso c) {
    Nodo* nuevo = new Nodo{c, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

Curso* ListaCursos::buscarPorCodigo(string codigo) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->curso.getCodigo() == codigo)
            return &aux->curso;
        aux = aux->sig;
    }
    return nullptr;
}

int ListaCursos::totalCreditos() {
    int suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->curso.getCreditos();
        aux = aux->sig;
    }
    return suma;
}

int ListaCursos::contarPorProfesor(string profesor) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->curso.getProfesor() == profesor)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

ListaCursos* ListaCursos::cursosPorProfesor(string profesor) {
    ListaCursos* lista = new ListaCursos();
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->curso.getProfesor() == profesor)
            lista->agregarCurso(aux->curso);
        aux = aux->sig;
    }
    return lista;
}

Curso* ListaCursos::cursoConMasCreditos() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Curso* mayor = &aux->curso;

    while (aux != nullptr) {
        if (aux->curso.getCreditos() > mayor->getCreditos())
            mayor = &aux->curso;
        aux = aux->sig;
    }
    return mayor;
}

double ListaCursos::promedioCreditos() {
    if (cabeza == nullptr) return 0;

    int suma = 0;
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->curso.getCreditos();
        cont++;
        aux = aux->sig;
    }
    return (double)suma / cont;
}
