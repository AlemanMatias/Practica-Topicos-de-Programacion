#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    char *cursor;
    bool finCadena;
}RecorreCadena;



bool esLetra(char *car);
bool esPalindromo(char *cadena);
void siguienteLetraAdelante(RecorreCadena *recInicio, char *cadena);//Dada una cadena el cursor de recInicio se posicionara en la primer letra que encuentre (Hacia adelante)
void siguienteLetraAtras(RecorreCadena *recFin, char *cadena);//Dada una cadena el cursor de recInicio se posicionara en la primer letra que encuentre (Hacia adelante)
void posicionarCursosrUltimaLetra(RecorreCadena *recFin, char *cadena);// Dada una cadena el cursor se posicionara en la ultima letra de la cadena
int cantLetras(char *cadena);


#endif // HEADER_H_INCLUDED
