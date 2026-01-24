// Ejercicio 12

#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes() {
    cabeza = nullptr;
    contador = 0;
}

ListaEstudiantes::~ListaEstudiantes() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->sig;
        delete temp->estudiante;
        delete temp;
    }
}

void ListaEstudiantes::agregarEstudiante(Estudiante* e) {
    Nodo* nuevo = new Nodo{e, nullptr};

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->sig != nullptr)
            aux = aux->sig;
        aux->sig = nuevo;
    }
    contador++;
}

Estudiante* ListaEstudiantes::buscarPorCarnet(string carnet) {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->estudiante->getCarnet() == carnet)
            return aux->estudiante;
        aux = aux->sig;
    }
    return nullptr;
}

double ListaEstudiantes::promedioGrupo() {
    if (contador == 0) return 0;

    double suma = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        suma += aux->estudiante->getPromedio();
        aux = aux->sig;
    }
    return suma / contador;
}

int ListaEstudiantes::contarAprobados(double notaMinima) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() >= notaMinima)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

int ListaEstudiantes::contarReprobados(double notaMinima) {
    int cont = 0;
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() < notaMinima)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

Estudiante* ListaEstudiantes::mejorEstudiante() {
    if (cabeza == nullptr) return nullptr;

    Nodo* aux = cabeza;
    Estudiante* mejor = aux->estudiante;

    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() > mejor->getPromedio())
            mejor = aux->estudiante;
        aux = aux->sig;
    }
    return mejor;
}

void ListaEstudiantes::aplicarCurva(double porcentaje) {
    Nodo* aux = cabeza;

    while (aux != nullptr) {
        double nuevo = aux->estudiante->getPromedio();
        nuevo += nuevo * (porcentaje / 100.0);
        aux->estudiante->setPromedio(nuevo);
        aux = aux->sig;
    }
}

// Ejercicio 33
double ListaEstudiantes::promedioGeneral() {
    if (cabeza == nullptr) return 0;
    double suma = 0;
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        suma += aux->estudiante->getPromedio();
        cont++;
        aux = aux->sig;
    }
    return suma / cont;
}

double ListaEstudiantes::promedioPorCarrera(string carrera) {
    double suma = 0;
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->estudiante->getCarrera() == carrera) {
            suma += aux->estudiante->getPromedio();
            cont++;
        }
        aux = aux->sig;
    }
    if (cont == 0) return 0;
    return suma / cont;
}

int ListaEstudiantes::contarPorCarrera(string carrera) {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->estudiante->getCarrera() == carrera)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

int ListaEstudiantes::contarPorSemestre(int semestre) {
    int cont = 0;
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->estudiante->getSemestre() == semestre)
            cont++;
        aux = aux->sig;
    }
    return cont;
}

ListaEstudiantes* ListaEstudiantes::estudiantesAprobados(double notaMinima) {
    ListaEstudiantes* nueva = new ListaEstudiantes();
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        if (aux->estudiante->getPromedio() >= notaMinima)
            nueva->agregarEstudiante(aux->estudiante);
        aux = aux->sig;
    }
    return nueva;
}

Estudiante* ListaEstudiantes::mejorEstudiantePorCarrera(string carrera) {
    Nodo* aux = cabeza;
    Estudiante* mejor = nullptr;
    while (aux != nullptr) {
        if (aux->estudiante->getCarrera() == carrera) {
            if (mejor == nullptr || aux->estudiante->getPromedio() > mejor->getPromedio())
                mejor = aux->estudiante;
        }
        aux = aux->sig;
    }
    return mejor;
}

int ListaEstudiantes::getContador() {
    return contador;
}





