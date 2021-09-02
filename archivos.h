#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED

#define ARCHIVO_ESPECIALIDADES "especialidades.txt"
#define SPECS_STRING_LEN 50
#define SPECS_CHAR_DEFAULT 'x'

#define ARCHIVO_HABITACIONES "habitaciones.dat"



//prototyopes

void inicSpecsFile(char*);
void inicSpecsMat();
void inicRoomsFile();
void inicDocsFile();
//void inicDocsArr();
void DocsFile2Arr();
void RoomsFile2Mat();
void inicRoomsMat();

#endif // ARCHIVOS_H_INCLUDED
