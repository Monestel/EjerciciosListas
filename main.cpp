#include <iostream>
#include "ListaEnteroB.h"


using namespace std;

int main() {

    cout << "=== EJERCICIO 1: ListaEnteros ===" << endl;

    ListaEnterosB lista;

    cout << "Lista vacia: " << lista.toString() << endl;
    cout << "Eliminar inicio (vacia): " << lista.eliminaInicio() << endl;
    cout << "Eliminar final (vacia): " << lista.eliminaFinal() << endl;

    lista.agregarInicio(10);
    cout << "Un elemento: " << lista.toString() << endl;

    lista.eliminaFinal();
    cout << "Despues de eliminar unico: " << lista.toString() << endl;

    lista.agregarInicio(20);
    lista.agregarInicio(30);
    lista.agregarFinal(40);
    lista.agregarFinal(50);

    cout << "Varios elementos: " << lista.toString() << endl;
    cout << "Cantidad: " << lista.getCantidad() << endl;

    lista.eliminaInicio();
    lista.eliminaFinal();

    cout << "Despues de eliminar inicio y final: "
         << lista.toString() << endl;

    cout << endl;


    return 0;
}
