#include "header.h"

int main()
{
    int vec[]={99,4,3,7,2},pos,num;
    puts("contenido de arreglo original :");
    imprimeVector(vec,CantElem);
    printf("\nIngrese una posicion del arreglo para insertar un elemento : ");
    do{
        scanf("%d",&pos);
    }while(!estaEnRango(1,CantElem,pos));
    printf("\nIngrese un entero para insertarlo en la posicion %d del arreglo : ",pos);
    scanf("%d",&num);
    insertarEnVec(vec,num,pos);

    puts("\ncontenido de arreglo luego de la insercion de un nuevo entero:");
    imprimeVector(vec,CantElem);

    return 0;
}
