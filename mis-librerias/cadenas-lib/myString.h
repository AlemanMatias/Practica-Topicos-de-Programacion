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
    char palabra[23]; //Segun la rae la palabra mas larga en español esta compuesta por 22 letras, fuente 2022
}Palabra;

bool esPalindromo(char *cadena); //Devuelve True si una cadena es Palindromo y devuelve false si NO lo es.

void crearSecuencia(SecuenciaCadena *secChar,char *cadena);// Dado un puntero a un tipo SecuenciaCadena y una cadena , se inicializa un cursor y un finCadena=false.

bool esLetra(char *car);//Dado un puntero a char, retornara true si lo apuntado es Letra y un false si No lo es.

bool esNumero(char *car);//Dado un puntero a char, retornara true si lo apuntado es Numero y un false si No lo es.

void convertCadToMayus(char *cadena);//Dada una cadena, convierte todos sus caracteres en mayusculas

void convertMinus(char *letra);// Dado un puntero a char, la convierte a minuscula si lo apuntado es letra.

void convertMayus(char *letra);// Dado un puntero a char, la convierte a mayuscula si lo apuntado es letra.

bool myStringComp(char *cadena1 ,char *cadena2);// dadas dos cadenas retornara true si son iguales o false si son distintas

int myStringComp2(char *cadena1, char *cadena2);// dadas dos cadenas retornara 0 si son iguales // 1 si la primer cadena  es mayor a la segunda // -1 si la cadena 1 es menor que la segunda

bool letrasIguales(char letra1, char letra2);// Dadas dos letras , se comparara sin importar si son mayusculas o minusculas, retorna true si son iguales.

void myStringCopy(char *destino ,char *origen);//Copia lo que hay en una cadena origen en una cadena destino

void finalizarCadena (char *cadena);//Dado un puntero a char, se imprimira un fin de cadena(char nulo).

int tamanioCadena (char *cadena);//Dada una cadena, la funcion retornara el tamaño de la cadena. Similar a Strlen





#endif // MYSTRING_H
