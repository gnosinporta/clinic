#ifndef HABITACIONES_H_INCLUDED
#define HABITACIONES_H_INCLUDED

typedef struct
{
    int numero;              //piso + numero(del 1 al 10)    ej: 101, 102, 205, 501, 510, etc.
    int libre;              //1 o 0
    //Paciente paciente     //en el caso de estar ocupada, va a tener un paciente
} Habitacion;

#endif // HABITACIONES_H_INCLUDED
