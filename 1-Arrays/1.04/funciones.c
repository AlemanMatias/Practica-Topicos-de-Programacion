#include "header.h"


void imprimeVector(int *vector,int ce)
{
    for(int i=0;i<ce;i++)
        printf("%d ",vector[i]);
    printf("\n");
}

bool eliminaElemVec(int *vector,int ce, int num)
{
    int pos=busquedaIntArray(vector,ce,num);
    if(pos){
        eliminaPosDeArray(vector,ce,pos);
        return true;
    }
    return false;
}

void eliminaPosDeArray(int *vector,int ce,int pos)
{
    int *p = &vector[pos-1];

    for(int i=pos-1;i<ce;i++){
        *(p) = *(p+1);
        p++;
    }
}

int busquedaIntArray(int *vector, int ce, int num)
{
    for(int i=0;i<ce;i++){
        if(vector[i]==num)
            return i+1; // se retorna la posicion real, es decir si 3 esta en la primera posicion retornara un 1.
    }
    return 0;// retorna un 0 si no encontro nada.
}
