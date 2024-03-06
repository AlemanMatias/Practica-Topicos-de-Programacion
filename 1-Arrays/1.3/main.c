#include "header.h"

int main()
{
    int vec[MAX]={99,6,15,1,56},pos;
    puts("arreglo original :");
    imprimeVector(vec,MAX);

    printf("Ingrese una posicion del vector de 1 a %d : ",MAX);
    do{
        scanf("%d",&pos);
    }while(!estaEnRango(1,MAX,pos));

    eliminaPosDeArray(vec,MAX,pos);

    puts("\narreglo despues :");
    imprimeVector(vec,MAX-1);



    return 0;
}
