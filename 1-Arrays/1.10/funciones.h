#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "../../mis-librerias/cadenas-lib/myString.h"

char* desofuscarCadena(char* cadenaOfuscada, char* grupoLetras);
char busquedaLetraCorrecta(char letra,char* cursor,char* reinicioCursor,int pos);
#endif // FUNCIONES_H_INCLUDED
