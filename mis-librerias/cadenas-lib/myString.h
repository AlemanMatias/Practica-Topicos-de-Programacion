#ifndef MYSTRING_H
#define MYSTRING_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct{
    char *cursor;
    bool finCadena;
}SecuenciaCadena;

typedef struct{
    char palabra[30];
}Palabra;


bool esPalindromo(char *cadena); //Devuelve True si una cadena es Palindromo y devuelve false si NO lo es.
void crearSecuencia(SecuenciaCadena *secChar,char *cadena);// Dado un puntero a un tipo SecuenciaCadena y una cadena , se inicializa un cursor y un finCadena=false.
bool esLetra(char *car);//Dado un puntero a char, retornara true si lo apuntado es Letra y un false si No lo es.
bool esNumero(char *car);//Dado un puntero a char, retornara true si lo apuntado es Numero y un false si No lo es.
void convertCadToMayus(char *cadena);//Dada una cadena, convierte todos sus caracteres en mayusculas
void convertMayus(char *letra);// Dado un puntero a char, la convierte a mayuscula si lo apuntado es letra.
bool myStringComp(char *cadena1 ,char *cadena2);// dadas dos cadenas retornara true si son iguales o false si son distintas
void myStringCopy(char *destino ,char *origen);



#endif // MYSTRING_H
