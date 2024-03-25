#ifndef MYTDA_H
#define MYTDA_H

#define SIN_MEM 0
#define LISTA_VACIA 0
#define TODO_OK 1
#define DUPLICADO 2
#define CAP 5

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "../../mis-librerias/cadenas-lib/myString.h"

typedef struct
{
    int ce;
    int vec[CAP];
    int cap;
}Lista;

void crearLista(Lista *pl);//Se inicializa una lista, puede usarse para convertir en basura todo su contenido y reutilizarlo

int llenarLista(Lista *pl);//LLena una lista vacia con enteros, hasta llenarla o hasta donde se desee (respetando la capacidad CAP)

void listar(Lista *pl); //imprime list

bool estaEnRango(int,int,int); //verifica si un numero esta en un rango especifico

int insertarListaPos(Lista *pl ,int ,int );//Inserta un elemento en una posicion dada

int insertarListaOrd(Lista *pl, int);//Inserta un elemento en una lista ORDENADA

bool continuar(); // solo pregunta si se desea continuar con el proceso

#endif // MYTDA_H
