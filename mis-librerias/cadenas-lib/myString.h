#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct{
    char *cursor;
    bool finCadena;
}SecuenciaCadena;


bool esPalindromo(char *cadena);
void crearSecuencia(SecuenciaCadena *secChar,char *cadena);
bool esLetra(char *car);
void convertMayus(char *letra);


#endif // MYSTRING_H_INCLUDED
