#include "matrices.h"
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <windows.h>
#include <string.h>

//definiciones

//crea y devuelve una matriz de enteros
int** crearMatriz(int filas, int columnas)
{
    int** mat = (int**)malloc(filas*sizeof(int*));

    for(int i=0; i<filas; i++)
        *(mat+i) = (int*)malloc(columnas*sizeof(int));

    return mat;
}

//inicializa una matriz de enteros con todos sus elementos en 0
void inicializarMatriz(int** mat, int filas, int columnas)
{
    for(int i=0; i<filas; i++)
        for(int j=0; j<columnas; j++)
            mat[i][j] = 0;
}

//muestra una matriz de enteros
void mostrarMatriz(int** mat, int filas, int columnas)
{
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}

//muestra una matriz de char (o sea, una lista de palabras)
void mostrarMatrizChar(char** mat, int palabras, int max_letras)
{
    for(int i=0; i<palabras; i++)
    {
        //for(int j=0; j<max_letras; j++)
        //{
            puts(mat[i]);
        //}
        printf("\n");
        fflush(stdin);
    }
}
