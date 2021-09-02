#include "inicio.h"
#include "archivos.h"
#include "medicos.h"
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <windows.h>

//declaraciones

void inicio(char* especialidadesString)
{
    //inicializar archivo de especialidades
    inicSpecsFile(especialidadesString);

    //inicializar la matriz de especialidades
    inicSpecsMat();

    //checkear si existe el archivo de habitaciones. Si no existe, lo crea.
    inicRoomsFile();

    //inicializar matriz de habitaciones (o hacerla una matriz común y no inicializarla)
    //por ahora es matriz
    inicRoomsMat();

    //cargar matriz de habitaciones
    RoomsFile2Mat();

    //checkear archivo de medicos, crearlo si no existe
    inicDocsFile();

    //inicializar el arreglo de medicos
    inicDocsArr();

    //cargar los medicos del archivo al arreglo
    DocsFile2Arr();
}



