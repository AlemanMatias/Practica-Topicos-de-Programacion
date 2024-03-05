#include "header.h"

void imprimeVector(int *vector,int ce)
{
    for(int i=0;i<ce;i++)
        printf("%d ",vector[i]);
}

bool estaEnRango(int lim1, int lim2,int pos)
{
    if(pos>=lim1 && pos<=lim2)
        return true;
    puts("\nEl numero no esta en el rango correcto, ingrese otro.");
    return false;
}

void insertarEnVec(int *vector,int num,int pos)
{
    vector[pos-1]=num;
}
