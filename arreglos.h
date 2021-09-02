#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

//cuerpo de las funciones

//crea un array de enteros y lo devuelve
int* crearArray(int elementos)
{
    int* arr = malloc(elementos*sizeof(int));
    return arr;
}

//inicializa un array de enteros con todos sus elementos en 0
void inicializarArray(int* arr, int elementos)
{
    for(int i=0; i<elementos; i++)
        *(arr+i) = 0;
}

//muestra un array de enteros
void mostrarArray(int* arr, int elementos)
{
    for(int i=0; i<elementos; i++)
        printf("%i ", *(arr+i));
    printf("\n");
}


/*void ordenarArray(*int, int)
{}*/

#endif // ARREGLOS_H_INCLUDED
