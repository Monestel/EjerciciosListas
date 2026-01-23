//Ejercicio 8

#include "ListaDuplicados.h"

ListaDuplicados::ListaDuplicados() {
    primero = nullptr;
    cant = 0;
}

ListaDuplicados::~ListaDuplicados() {
    while (primero != nullptr) {
        NodoDuplicados* temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}

bool ListaDuplicados::vacia() {
    return primero == nullptr;
}

void ListaDuplicados::agregarInicio(int valor) {
    NodoDuplicados* nuevo = new NodoDuplicados(valor, primero);
    primero = nuevo;
    cant++;
}

void ListaDuplicados::agregarFinal(int valor) {
    NodoDuplicados* nuevo = new NodoDuplicados(valor, nullptr);

    if (vacia()) {
        primero = nuevo;
    } else {
        NodoDuplicados* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(nuevo);
    }
    cant++;
}

bool ListaDuplicados::eliminarInicio() {
    if (vacia()) return false;

    NodoDuplicados* temp = primero;
    primero = primero->getSig();
    delete temp;
    cant--;
    return true;
}

bool ListaDuplicados::eliminarFinal() {
    if (vacia()) return false;

    if (primero->getSig() == nullptr) {
        delete primero;
        primero = nullptr;
    } else {
        NodoDuplicados* actual = primero;
        while (actual->getSig()->getSig() != nullptr) {
            actual = actual->getSig();
        }
        delete actual->getSig();
        actual->setSig(nullptr);
    }
    cant--;
    return true;
}

bool ListaDuplicados::tieneDuplicados() {
    for (NodoDuplicados* i = primero; i != nullptr; i = i->getSig()) {
        for (NodoDuplicados* j = i->getSig(); j != nullptr; j = j->getSig()) {
            if (i->getDato() == j->getDato()) {
                return true;
            }
        }
    }
    return false;
}

void ListaDuplicados::eliminarDuplicados() {
    NodoDuplicados* actual = primero;

    while (actual != nullptr) {
        NodoDuplicados* prev = actual;
        NodoDuplicados* sig = actual->getSig();

        while (sig != nullptr) {
            if (sig->getDato() == actual->getDato()) {
                prev->setSig(sig->getSig());
                delete sig;
                sig = prev->getSig();
                cant--;
            } else {
                prev = sig;
                sig = sig->getSig();
            }
        }
        actual = actual->getSig();
    }
}

int ListaDuplicados::contarUnicos() {
    int cont = 0;

    for (NodoDuplicados* i = primero; i != nullptr; i = i->getSig()) {
        bool repetido = false;
        for (NodoDuplicados* j = primero; j != i; j = j->getSig()) {
            if (i->getDato() == j->getDato()) {
                repetido = true;
                break;
            }
        }
        if (!repetido) cont++;
    }
    return cont;
}

ListaDuplicados* ListaDuplicados::obtenerUnicos() {
    ListaDuplicados* nueva = new ListaDuplicados();

    for (NodoDuplicados* i = primero; i != nullptr; i = i->getSig()) {
        bool existe = false;
        for (NodoDuplicados* j = nueva->primero; j != nullptr; j = j->getSig()) {
            if (i->getDato() == j->getDato()) {
                existe = true;
                break;
            }
        }
        if (!existe) {
            nueva->agregarFinal(i->getDato());
        }
    }
    return nueva;
}

string ListaDuplicados::toString() {
    stringstream ss;
    NodoDuplicados* actual = primero;

    while (actual != nullptr) {
        ss << actual->getDato() << " ";
        actual = actual->getSig();
    }
    return ss.str();
}

int ListaDuplicados::tamano() {
    return cant;
}
