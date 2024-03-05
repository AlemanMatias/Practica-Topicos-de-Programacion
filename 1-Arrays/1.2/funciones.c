#include <stdio.h>
#include <stdlib.h>

void imprimeVector(int *vector,int ce)
{
    for(int i=0;i<ce;i++)
        printf("%d ",vector[i]);
    puts("\n");
}

void insertarEnVecOrdenado(int *vector,int ce,int max,int num)//vec[MAX]={3,5,8,12,15}
{
    int i=0;

    if(ce>=max){
        puts("\n### EL ARREGLO NO TIENE MAS ESPACIO ,EL PROGRAMA FINALIZARA ###\n");
        exit(0);
    }
    int *p = &vector[ce-1];//inicialize el puntero p en la ultima posicion del vector donde esta cargado.
    while(!(num<vector[i]) && i<ce)
        i++;

    for(int j=ce-1;j>=i;j--){
        *(p+1)=*p;
        p--;
    }
    vector[i]=num;
}
