#include <iostream>
#include "ListaEnteroB.h"
#include "ListaContador.h"
#include "ListaBusqueda.h"
#include "ListaCaracter.h"
#include "ListaReales.h"
#include "ListaOpePila.h"

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



    cout << "EJERCICIO 2" << endl;

    ListaEnteros2 LisEnt;

    cout << LisEnt.obtenerPrimero() << endl;
    cout << LisEnt.obtenerUltimo() << endl;
    cout << LisEnt.promedio() << endl;

    LisEnt.agregarFinal(10);
    LisEnt.agregarFinal(20);
    LisEnt.agregarFinal(30);
    LisEnt.agregarFinal(40);

    cout << LisEnt.toString() << endl;
    cout << LisEnt.obtenerPrimero() << endl;
    cout << LisEnt.obtenerUltimo() << endl;
    cout << LisEnt.sumarElementos() << endl;
    cout << LisEnt.promedio() << endl;
    cout << LisEnt.encontrarMaximo() << endl;
    cout << LisEnt.encontrarMinimo() << endl;

    LisEnt.eliminaInicio();
    LisEnt.eliminaFinal();

    cout << LisEnt.toString() << endl;



    cout << "EJERCICIO 3" << endl;

    ListaBusqueda LisBusq;

    cout << LisBusq.buscar(10) << endl;
    cout << LisBusq.contarApariciones(10) << endl;
    cout << LisBusq.obtenerPosicion(10) << endl;
    cout << LisBusq.eliminarPorValor(10) << endl;

    LisBusq.agregarFinal(10);
    LisBusq.agregarFinal(20);
    LisBusq.agregarFinal(10);
    LisBusq.agregarFinal(30);
    LisBusq.agregarFinal(10);

    cout << LisBusq.buscar(20) << endl;
    cout << LisBusq.contarApariciones(10) << endl;
    cout << LisBusq.obtenerPosicion(30) << endl;

    cout << LisBusq.eliminarPorValor(10) << endl;
    cout << LisBusq.eliminarTodasOcurrencias(10) << endl;
    cout << endl;



    cout << "EJERCICIO 4" << endl;

    ListaCaracteres LisCaract;

    LisCaract.agregarFinal('a');
    LisCaract.agregarFinal('n');
    LisCaract.agregarFinal('i');
    LisCaract.agregarFinal('l');
    LisCaract.agregarFinal('i');
    LisCaract.agregarFinal('n');
    LisCaract.agregarFinal('a');

    cout << LisCaract.obtenerCadena() << endl;
    cout << LisCaract.contarCaracter('a') << endl;
    cout << LisCaract.esPalindromo() << endl;

    LisCaract.invertir();
    cout << LisCaract.obtenerCadena() << endl;
    cout << endl;



    cout << "EJERCICIO 5" << endl;

    ListaReales lisReal;

    lisReal.agregarFinal(2.5);
    lisReal.agregarFinal(-1.0);
    lisReal.agregarFinal(4.0);
    lisReal.agregarFinal(-3.5);

    cout << lisReal.toString() << endl;
    cout << lisReal.suma() << endl;
    cout << lisReal.promedio() << endl;
    cout << lisReal.producto() << endl;
    cout << lisReal.contarPositivos() << endl;
    cout << lisReal.contarNegativos() << endl;
    cout << lisReal.encontrarMayor() << endl;
    cout << lisReal.encontrarMenor() << endl;

    lisReal.eliminarInicio();
    lisReal.eliminarFinal();

    cout << lisReal.toString() << endl;
    cout << endl;



    cout << "EJERCICIO 6" << endl;

    ListaPila pila;

    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << pila.top() << endl;
    cout << pila.pop() << endl;
    cout << pila.top() << endl;
    cout << pila.tamano() << endl;

    pila.pop();
    pila.pop();

    cout << pila.estaVacia() << endl;





    return 0;
}
