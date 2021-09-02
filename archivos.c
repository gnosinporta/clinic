#include "archivos.h"
#include "matrices.h"
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <windows.h>
#include <string.h>

//declarations

void inicSpecsFile(char* especialidadesString)
{
    FILE *specialties;

    if( (specialties = fopen(ARCHIVO_ESPECIALIDADES, "rt")) == NULL ) //si el archivo no existe
    {
        /*
        * crear archivo*/
        specialties = fopen(ARCHIVO_ESPECIALIDADES, "wt");


        /*
        * inicializar el archivo*/
        for(int j=0; j<5; j++){
            for(int i=0; i<SPECS_STRING_LEN; i++)
            {
                putc(SPECS_CHAR_DEFAULT, specialties);
            }
            putc('\n', specialties);
        }
        fflush(stdout); //limpio el buffer de salida

        /*
        * lanzar alerta de que se necesitan especialidades (incluso maybe no dejar usar el programa porque "se necesitan especialidades")
        */
    }
    else    //el archivo existe y está abierto
    {
        /*
        * pasar las especialides del archivo a la matriz de especialidades
        */

        char* strAux = (char*)malloc((SPECS_STRING_LEN+1)*sizeof(char));   //string que recibe del archivo
        //strAux = "";
        //char* strToMat;     //string que irá en la matriz de especialidades
        int strLenght;
        int aux=0;

        fflush(stdin);

        while( fgets(strAux, (SPECS_STRING_LEN+1), specialties) )   //mientras no se llegue al fin del archivo, va leyendo líneas
        {
            printf("%s", strAux);
            strLenght = strlen(strAux);                 //calcula la extensión de la línea copiada
            printf("%i\n", strLenght);
            /*strToMat = malloc((SPECS_STRING_LEN+1)*sizeof(char));  //crea un string del tamaño justo
            //strToMat= "";                                   //inicializa la cadena a nula
            printf("%i", strlen(strToMat));
            strcpy(strToMat, strAux);                   //copia la linea levantada del archivo al string de tamaño justo
            printf("%i\n", strToMat);*/
            especialidadesString[aux] = strAux;   //copia el string de tamaño justo al primer lugar de la matriz de especialidades

            aux++;                                      //sube una posición en la matriz de especialidades
            fflush(stdin);                             //limpia el buffer estándar de entrada
        }

        mostrarMatrizChar(especialidadesString, 5, SPECS_STRING_LEN);

    }

    fclose(specialties);
}


//checkea si existe el archivo de especialidades. Si no lo existe, lo crea.
void inicSpecsMat()
{
    //asd
    //asd
}

void RoomsFile2Mat()
{
    //asd
}



void inicRoomsFile()
{
      FILE *rooms;

    if( (rooms = fopen(ARCHIVO_HABITACIONES, "rb")) == NULL )   //si el archivo no existe
    {
        /*
        * crear archivo
        * llenarlo con habitaciones vacías pero con número correcto
        */
    }
    else    //el archivo existe y está abierto
    {
        /*
        * pasar las habitaciones del archivo a la matriz de habitaciones
        */
    }

    fclose(rooms);
}

void inicDocsFile()
{
    //asd
    //asd
}



void DocsFile2Arr()
{
    //asd
    //asd
}


void inicRoomsMat()
{
    //
    //
}
