#include "header.h"

void imprimeVector(int *vector,int ce)
{
    for(int i=0;i<ce;i++)
        printf("%d ",vector[i]);
    puts("\n");
}

bool estaEnRango(int lim1, int lim2,int pos)
{
    if(pos>=lim1 && pos<=lim2)
        return true;
    puts("\nEl numero no esta en el rango correcto, ingrese otro.");
    return false;
}

void eliminaPosDeArray(int *vector,int ce,int pos)//{99,6,15,1,56}
{
    int *p = &vector[pos-1];

    for(int i=pos-1;i<ce;i++){
        *(p) = *(p+1);
        p++;
    }
}
