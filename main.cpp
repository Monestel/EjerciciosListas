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
#include "ListaProductos.h"
#include "ListaBiblioteca.h"
#include "ListaCarros.h"
#include "ListaEmpleados.h"
#include "ListaFacturas.h"
#include "ListaReservas.h"
#include "ListaCursos.h"
#include "ListaTransacciones.h"
#include "ListaInvertir.h"
#include "ListaComparar.h"
#include "ListaConcatenar.h"
#include "ListaDividir.h"
#include "ListaRotar.h"
#include "ListaOrdenar.h"
#include "ListaFiltrar.h"
#include "ListaEstadisticas.h"
#include "ListaHistorial.h"
#include "ListaCircular.h"


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



    cout << "EJERCICIO 11" << endl;

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



    cout << "EJERCICIO 12" << endl;

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
    cout << endl;



    cout << "EJERCICIO 13" << endl;

    ListaProductos listaProd;

    listaProd.agregarProducto(new Producto("P01", "Teclado", 25.5, 10));
    listaProd.agregarProducto(new Producto("P02", "Mouse", 15.0, 5));
    listaProd.agregarProducto(new Producto("P03", "Monitor", 180.0, 2));
    listaProd.agregarProducto(new Producto("P04", "USB", 8.0, 50));

    cout << listaProd.valorTotalInventario() << endl;
    cout << listaProd.gananciaTotal() << endl;

    Producto* caro = listaProd.productoMasCaro();
    if (caro != nullptr)
        cout << caro->getNombre() << endl;

    cout << listaProd.productosConStockBajo(6) << endl;

    cout << listaProd.actualizarStock("P02", 20) << endl;
    cout << listaProd.buscarPorCodigo("P02")->getStock() << endl;
    cout << endl;

    cout << "EJERCICIO 14" << endl;

    ListaBiblioteca biblioteca;

    biblioteca.agregarLibro(new Libro("L01", "Cien Años", "Garcia", 1967, true));
    biblioteca.agregarLibro(new Libro("L02", "El Quijote", "Cervantes", 1605, true));
    biblioteca.agregarLibro(new Libro("L03", "Otra Historia", "Garcia", 2001, true));
    biblioteca.agregarLibro(new Libro("L04", "Libro X", "Perez", 2010, false));

    cout << biblioteca.contarDisponibles() << endl;
    cout << biblioteca.contarLibrosPorAutor("Garcia") << endl;

    biblioteca.prestarLibro("L01");
    cout << biblioteca.contarDisponibles() << endl;

    biblioteca.devolverLibro("L04");
    cout << biblioteca.contarDisponibles() << endl;

    Libro* encontrado = biblioteca.buscarPorTitulo("El Quijote");
    if (encontrado != nullptr)
        cout << encontrado->getAutor() << endl;

    ListaBiblioteca* autorGarcia = biblioteca.librosPorAutor("Garcia");
    cout << autorGarcia->contarLibrosPorAutor("Garcia") << endl;

    delete autorGarcia;

    cout << endl;



    cout << "EJERCICIO 15" << endl;

    ListaCarros listaCarros;

    listaCarros.insertarOrdenado(Carro("P01", "Toyota", 2010, 8500));
    listaCarros.insertarOrdenado(Carro("P02", "Honda", 2015, 10500));
    listaCarros.insertarOrdenado(Carro("P03", "Toyota", 2005, 6000));
    listaCarros.insertarOrdenado(Carro("P04", "Nissan", 2020, 15000));

    cout << listaCarros.contarPorMarca("Toyota") << endl;

    Carro* viejo = listaCarros.carroMasViejo();
    if (viejo != nullptr)
        cout << viejo->getPlaca() << endl;

    Carro* nuevo = listaCarros.carroMasNuevo();
    if (nuevo != nullptr)
        cout << nuevo->getPlaca() << endl;

    cout << listaCarros.precioPromedio() << endl;

    listaCarros.eliminarPorPlaca("P02");
    cout << listaCarros.precioPromedio() << endl;

    Carro* buscados = listaCarros.buscarPorPlaca("P04");
    if (buscados != nullptr)
        cout << buscados->getMarca() << endl;

    cout << endl;



    cout << "EJERCICIO 16" << endl;

    ListaEmpleados listaEmp;

    listaEmp.agregarEmpleado(Empleado(1, "Ana", 1200, "IT"));
    listaEmp.agregarEmpleado(Empleado(2, "Luis", 950, "HR"));
    listaEmp.agregarEmpleado(Empleado(3, "Maria", 1500, "IT"));
    listaEmp.agregarEmpleado(Empleado(4, "Pedro", 1100, "Ventas"));

    cout << listaEmp.salarioTotal() << endl;
    cout << listaEmp.salarioPromedio() << endl;
    cout << listaEmp.contarPorDepartamento("IT") << endl;

    Empleado* mejorEmp = listaEmp.empleadoMejorPagado();
    if (mejorEmp != nullptr)
        cout << mejorEmp->getNombre() << endl;

    Empleado* buscadoE = listaEmp.buscarPorId(2);
    if (buscadoE != nullptr)
        cout << buscadoE->getDepartamento() << endl;

    ListaEmpleados* it = listaEmp.empleadosPorDepartamento("IT");
    cout << it->contarPorDepartamento("IT") << endl;

    delete it;
    cout << endl;



    cout << "EJERCICIO 17" << endl;

    ListaFacturas listaFac;

    listaFac.agregarFactura(Factura(1001, "Ana", 250.5, "2024-01-10"));
    listaFac.agregarFactura(Factura(1002, "Luis", 120.0, "2024-01-11"));
    listaFac.agregarFactura(Factura(1003, "Ana", 300.0, "2024-01-12"));
    listaFac.agregarFactura(Factura(1004, "Pedro", 450.75, "2024-01-13"));

    cout << listaFac.montoTotal() << endl;
    cout << listaFac.montoPromedio() << endl;
    cout << listaFac.contarPorCliente("Ana") << endl;
    cout << listaFac.totalPorCliente("Ana") << endl;

    Factura* facMayor = listaFac.facturaMayor();
    if (facMayor != nullptr)
        cout << facMayor->getNumero() << endl;

    Factura* facBuscada = listaFac.buscarPorNumero(1002);
    if (facBuscada != nullptr)
        cout << facBuscada->getCliente() << endl;

    cout << endl;



    cout << "EJERCICIO 18" << endl;

    ListaReservas listaRes;

    listaRes.agregarReserva(Reserva(1, "Ana", "2024-02-01", 300, "confirmada"));
    listaRes.agregarReserva(Reserva(2, "Luis", "2024-02-02", 150, "cancelada"));
    listaRes.agregarReserva(Reserva(3, "Ana", "2024-02-03", 450, "confirmada"));
    listaRes.agregarReserva(Reserva(4, "Pedro", "2024-02-04", 200, "pendiente"));

    cout << listaRes.montoTotalReservas() << endl;
    cout << listaRes.contarConfirmadas() << endl;
    cout << listaRes.contarPorEstado("cancelada") << endl;

    listaRes.cambiarEstado(4, "confirmada");
    cout << listaRes.contarConfirmadas() << endl;

    Reserva* resBuscada = listaRes.buscarPorId(2);
    if (resBuscada != nullptr)
        cout << resBuscada->getCliente() << endl;

    ListaReservas* anaRes = listaRes.reservasPorCliente("Ana");
    cout << anaRes->contarConfirmadas() << endl;

    delete anaRes;

    cout << endl;



    cout << "EJERCICIO 19" << endl;

    ListaCursos listaCur;

    listaCur.agregarCurso(Curso("INF101", "Programacion", 4, "Perez"));
    listaCur.agregarCurso(Curso("MAT201", "Calculo", 3, "Gomez"));
    listaCur.agregarCurso(Curso("INF202", "Estructuras", 5, "Perez"));
    listaCur.agregarCurso(Curso("HIS100", "Historia", 2, "Lopez"));

    cout << listaCur.totalCreditos() << endl;
    cout << listaCur.promedioCreditos() << endl;
    cout << listaCur.contarPorProfesor("Perez") << endl;

    Curso* curMayor = listaCur.cursoConMasCreditos();
    if (curMayor != nullptr)
        cout << curMayor->getCodigo() << endl;

    Curso* curBuscado = listaCur.buscarPorCodigo("MAT201");
    if (curBuscado != nullptr)
        cout << curBuscado->getNombre() << endl;

    ListaCursos* curPerez = listaCur.cursosPorProfesor("Perez");
    cout << curPerez->totalCreditos() << endl;

    delete curPerez;

    cout << endl;



    cout << "EJERCICIO 20" << endl;

    ListaTransacciones listaT;

    listaT.agregarTransaccion(Transaccion(1, "Ingreso", 500.0, "2024-01-10"));
    listaT.agregarTransaccion(Transaccion(2, "Gasto", 200.0, "2024-01-11"));
    listaT.agregarTransaccion(Transaccion(3, "Ingreso", 800.0, "2024-01-12"));
    listaT.agregarTransaccion(Transaccion(4, "Gasto", 150.0, "2024-01-13"));

    cout << listaT.montoTotal() << endl;
    cout << listaT.montoPorTipo("Ingreso") << endl;
    cout << listaT.contarPorTipo("Gasto") << endl;

    Transaccion* mayorT = listaT.transaccionMayor();
    if (mayorT != nullptr)
        cout << mayorT->getId() << endl;

    Transaccion* buscadaT = listaT.buscarPorId(2);
    if (buscadaT != nullptr)
        cout << buscadaT->getMonto() << endl;

    ListaTransacciones* ingresos = listaT.transaccionesPorTipo("Ingreso");
    cout << ingresos->montoTotal() << endl;

    delete ingresos;

    cout << endl;



    cout << "EJERCICIO 21" << endl;

    ListaInvertir listaInv;

    listaInv.agregarFinal(1);
    listaInv.agregarFinal(2);
    listaInv.agregarFinal(3);
    listaInv.agregarFinal(2);
    listaInv.agregarFinal(1);

    cout << listaInv.esPalindromo() << endl;

    ListaInvertir* inv = listaInv.obtenerInversa();
    cout << inv->esPalindromo() << endl;

    listaInv.invertirRango(1, 3);
    cout << listaInv.esPalindromo() << endl;

    listaInv.invertir();

    delete inv;

    cout << endl;



    cout << "EJERCICIO 22" << endl;

    ListaComparar l1;
    ListaComparar l2;

    l1.agregarFinal(1);
    l1.agregarFinal(2);
    l1.agregarFinal(3);
    l1.agregarFinal(4);

    l2.agregarFinal(3);
    l2.agregarFinal(4);
    l2.agregarFinal(5);

    cout << l1.sonIguales(&l2) << endl;
    cout << l1.contiene(&l2) << endl;

    ListaComparar* dif = l1.diferencia(&l2);
    ListaComparar* inter = l1.interseccion(&l2);

    cout << dif->contiene(inter) << endl;

    delete dif;
    delete inter;

    cout << endl;



    cout << "EJERCICIO 23" << endl;

    ListaConcatenar lisCon1;
    ListaConcatenar lisCon2;

    lisCon1.agregarFinal(1);
    lisCon1.agregarFinal(2);
    lisCon1.agregarFinal(3);

    lisCon2.agregarFinal(4);
    lisCon2.agregarFinal(5);
    lisCon2.agregarFinal(6);

    lisCon1.concatenar(&lisCon2);

    ListaConcatenar* unida = lisCon1.unir(&lisCon2);

    ListaConcatenar l3;
    l3.agregarFinal(9);
    l3.agregarFinal(8);

    lisCon1.insertarLista(2, &l3);

    delete unida;

    cout << endl;



    cout << "EJERCICIO 24" << endl;

    ListaDividir listaD;

    listaD.agregarFinal(1);
    listaD.agregarFinal(2);
    listaD.agregarFinal(3);
    listaD.agregarFinal(4);
    listaD.agregarFinal(5);
    listaD.agregarFinal(6);

    ListaDividir* segunda = listaD.dividir(3);

    ListaDividir* primeraMitad = listaD.obtenerPrimeraMitad();
    ListaDividir* segundaMitad = listaD.obtenerSegundaMitad();

    listaD.eliminarMitad();

    delete segunda;
    delete primeraMitad;
    delete segundaMitad;

    cout << endl;



    cout << "EJERCICIO 25" << endl;

    ListaRotar listaR;

    listaR.agregarFinal(1);
    listaR.agregarFinal(2);
    listaR.agregarFinal(3);
    listaR.agregarFinal(4);
    listaR.agregarFinal(5);

    listaR.rotarIzquierda(2);
    listaR.rotarDerecha(1);
    listaR.rotarHasta(3);

    cout << endl;



    cout << "EJERCICIO 26" << endl;

    ListaOrdenar listaO;

    listaO.agregarFinal(5);
    listaO.agregarFinal(3);
    listaO.agregarFinal(1);
    listaO.agregarFinal(4);
    listaO.agregarFinal(2);

    cout << listaO.estaOrdenada() << endl;

    listaO.ordenarBurbuja();
    cout << listaO.estaOrdenada() << endl;

    listaO.agregarFinal(0);
    listaO.ordenarSeleccion();
    cout << listaO.estaOrdenada() << endl;

    listaO.agregarFinal(6);
    listaO.ordenarInsercion();
    cout << listaO.estaOrdenada() << endl;

    cout << endl;



    cout << "EJERCICIO 27" << endl;

    ListaFiltrar listaF;

    listaF.agregarFinal(1);
    listaF.agregarFinal(2);
    listaF.agregarFinal(3);
    listaF.agregarFinal(4);
    listaF.agregarFinal(5);
    listaF.agregarFinal(6);

    ListaFiltrar* pares = listaF.filtrarPares();
    ListaFiltrar* impares = listaF.filtrarImpares();
    ListaFiltrar* mayores = listaF.filtrarMayores(3);
    ListaFiltrar* menores = listaF.filtrarMenores(4);

    delete pares;
    delete impares;
    delete mayores;
    delete menores;

    cout << endl;



    cout << "EJERCICIO 28" << endl;

    ListaEstadisticas listaE;

    listaE.agregarFinal(1);
    listaE.agregarFinal(2);
    listaE.agregarFinal(2);
    listaE.agregarFinal(3);
    listaE.agregarFinal(4);
    listaE.agregarFinal(5);

    cout << listaE.moda() << endl;
    cout << listaE.mediana() << endl;
    cout << listaE.desviacionEstandar() << endl;
    cout << listaE.rango() << endl;

    ListaEstadisticas* top = listaE.obtenerTopN(3);

    delete top;

    cout << endl;



    cout << "EJERCICIO 29" << endl;

    ListaHistorial lh;

    lh.agregarFinal(10);
    lh.agregarFinal(20);
    lh.agregarFinal(30);

    lh.deshacer();
    lh.deshacer();
    lh.rehacer();

    cout << lh.historialDisponible() << endl;

    lh.limpiarHistorial();

    cout << endl;



    cout << "EJERCICIO 30" << endl;

    ListaCircular lc;

    lc.agregar(5);
    lc.agregar(10);
    lc.agregar(15);

    lc.recorrerCompleto();

    cout << lc.contarElementos() << endl;
    cout << lc.buscar(10) << endl;

    lc.eliminar(10);
    lc.recorrerCompleto();

    cout << endl;



    cout << "EJERCICIO 31" << endl;

    ListaBiblioteca biblio;

    biblio.agregarLibro(new Libro("L01","C++","Bjarne",1998,"Programacion",50));
    biblio.agregarLibro(new Libro("L02","Java","Gosling",2005,"Programacion",45));
    biblio.agregarLibro(new Libro("L03","Historia","Perez",1980,"Historia",30));

    biblio.prestarLibro("L01","Juan");

    cout << biblio.contarDisponibles() << endl;
    cout << biblio.contarPrestados() << endl;

    Libro* ant = biblio.libroMasAntiguo();
    if (ant != nullptr)
        cout << ant->getTitulo() << endl;

    Libro* rec = biblio.libroMasReciente();
    if (rec != nullptr)
        cout << rec->getTitulo() << endl;

    cout << biblio.valorTotalBiblioteca() << endl;

    ListaBiblioteca* prog = biblio.librosPorCategoria("Programacion");
    delete prog;




    return 0;
}
