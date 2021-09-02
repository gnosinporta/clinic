#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <windows.h>
//#include "arboles.h"
//#include "archivos.h"
#include "arreglos.h"
#include "habitaciones.h"
//#include "listas_simples.h"
#include "matrices.h"
#include "medicos.h"
#include "menu.h"
//#include "pacientes.h"
//#include "turnos.h"
#include "inicio.h"

//prototipados de funciones
void menuPrincipal();


//variables globales because FUCK IT



//matriz de habitaciones
Habitacion habitaciones[5][10];
//Habitacion** habitaciones;             //también es válido "Habitaciones habitaciones[5][10]" y ahorramos la inicializacion


int main()
{
    //arreglos paralelos de especialidades
    int especialidadesInt[5] = {0,1,2,3,4}; //ids de las especialidades
    char especialidadesString[5][50];            //matriz con los nombres de las especialidades*


    inicio(especialidadesString);
    menuPrincipal();

    /*int filas = 3, columnas = 10;
    int** mat = crearMatriz(filas, columnas);
    inicializarMatriz(mat, filas, columnas);
    mostrarMatriz(mat, filas, columnas);
    ESTE BLOQUE ANDA
    */

    /*int elementos = 10;
    int* arr = crearArray(elementos);
    inicializarArray(arr, elementos);
    mostrarArray(arr, elementos);
    ESTE BLOQUE ANDA
    */

    return 0;
}



