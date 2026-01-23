#include <iostream>
#include "ListaEnteroB.h"
#include "ListaContador.h"
#include "ListaBusqueda.h"
#include "ListaCaracter.h"
#include "ListaReales.h"
#include "ListaOpePila.h"
#include "ListaOpeCola.h"
#include "ListaDuplicados.h"
#include "ListaOrdenada.h"
#include "ListaRango.h"
#include "ListaPersonas.h"
#include "ListaEstudiantes.h"

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
    cout << endl;



    cout << "EJERCICIO 7" << endl;

    ListaCola cola;

    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);

    cout << cola.frente() << endl;
    cout << cola.desencolar() << endl;
    cout << cola.frente() << endl;
    cout << cola.tamano() << endl;

    cola.desencolar();
    cola.desencolar();

    cout << cola.estaVacia() << endl;
    cout << endl;



    cout << "EJERCICIO 8" << endl;

    ListaDuplicados lisDup;

    lisDup.agregarFinal(1);
    lisDup.agregarFinal(2);
    lisDup.agregarFinal(1);
    lisDup.agregarFinal(3);
    lisDup.agregarFinal(2);

    cout << lisDup.toString() << endl;
    cout << lisDup.tieneDuplicados() << endl;
    cout << lisDup.contarUnicos() << endl;

    ListaDuplicados* unicos = lisDup.obtenerUnicos();
    cout << unicos->toString() << endl;

    lisDup.eliminarDuplicados();
    cout << lisDup.toString() << endl;

    delete unicos;
    cout << endl;



    cout << "EJERCICIO 9" << endl;

    ListaOrdenada lisOrd;

    lisOrd.insertarOrdenado(5);
    lisOrd.insertarOrdenado(2);
    lisOrd.insertarOrdenado(8);
    lisOrd.insertarOrdenado(1);

    cout << lisOrd.toString() << endl;
    cout << lisOrd.estaOrdenada() << endl;

    ListaOrdenada lisDesc;
    lisDesc.insertarOrdenadoDesc(5);
    lisDesc.insertarOrdenadoDesc(2);
    lisDesc.insertarOrdenadoDesc(8);
    lisDesc.insertarOrdenadoDesc(1);

    cout << lisDesc.toString() << endl;
    cout << endl;



    cout << "EJERCICIO 10" << endl;

    ListaRango lisRan;

    lisRan.agregarFinal(10);
    lisRan.agregarFinal(20);
    lisRan.agregarFinal(30);
    lisRan.agregarFinal(40);
    lisRan.agregarFinal(50);

    cout << lisRan.toString() << endl;

    ListaRango* sub = lisRan.obtenerRango(1, 3);
    cout << sub->toString() << endl;

    lisRan.eliminarRango(1, 2);
    cout << lisRan.toString() << endl;

    lisRan.insertarEnPosicion(1, 99);
    cout << lisRan.toString() << endl;

    cout << lisRan.obtenerEnPosicion(2) << endl;

    lisRan.eliminarEnPosicion(2);
    cout << lisRan.toString() << endl;

    delete sub;
    cout << endl;



    ListaPersonas listaP;

    listaP.agregarPersona(new Persona("Ana", 25, "F"));
    listaP.agregarPersona(new Persona("Carlos", 30, "M"));
    listaP.agregarPersona(new Persona("Laura", 22, "F"));
    listaP.agregarPersona(new Persona("Pedro", 40, "M"));

    cout << "Promedio de edades: " << listaP.promedioEdades() << endl;

    Persona* p = listaP.buscarPorNombre("Laura");
    if (p != nullptr)
        cout << "Laura encontrada, edad: " << p->getEdad() << endl;
    else
        cout << "Laura no encontrada" << endl;

    cout << "Cantidad genero F: " << listaP.contarPorGenero("F") << endl;
    cout << "Mayores de 30: " << listaP.contarMayoresDe(30) << endl;

    Persona* joven = listaP.personaMasJoven();
    if (joven != nullptr)
        cout << "Persona mas joven: " << joven->getNombre() << endl;

    Persona* vieja = listaP.personaMasVieja();
    if (vieja != nullptr)
        cout << "Persona mas vieja: " << vieja->getNombre() << endl;
    cout << endl;



    ListaEstudiantes listaEst;

    listaEst.agregarEstudiante(new Estudiante("Ana", "A01", 85));
    listaEst.agregarEstudiante(new Estudiante("Luis", "A02", 70));
    listaEst.agregarEstudiante(new Estudiante("Maria", "A03", 92));
    listaEst.agregarEstudiante(new Estudiante("Pedro", "A04", 60));

    cout << listaEst.promedioGrupo() << endl;

    cout << listaEst.contarAprobados(70) << endl;
    cout << listaEst.contarReprobados(70) << endl;

    Estudiante* mejor = listaEst.mejorEstudiante();
    if (mejor != nullptr)
        cout << mejor->getNombre() << endl;

    listaEst.aplicarCurva(10);

    cout << listaEst.promedioGrupo() << endl;

    Estudiante* buscado = listaEst.buscarPorCarnet("A02");
    if (buscado != nullptr)
        cout << buscado->getNombre() << endl;



    return 0;
}
