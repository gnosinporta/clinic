#ifndef MEDICOS_H_INCLUDED
#define MEDICOS_H_INCLUDED

typedef struct{
    int id;             //id unico de cada medico
    char nombre[50];    //pretty fucking self explanatory
    int especialidad;   //habrá dos arreglos paralelos (int y char) de especialidades (o una matriz de punteros void?)
    int baja;           //si es 1, se le da baja lógica (en algún momento habría que hacer la baja física)
} Medico;

void inicDocsArr();

#endif // MEDICOS_H_INCLUDED
