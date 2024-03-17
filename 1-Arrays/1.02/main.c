#include "header.h"

int main()
{
    int vec[MAX]={3,5,8,12,15},cantElem=5,num;
    puts("arreglo original :");
    imprimeVector(vec,cantElem);

    puts("Ingrese un numero para insertarlo en un arreglo de enteros de fomra ascendente : ");
    scanf("%d",&num);
    insertarEnVecOrdenado(vec,cantElem,MAX,num);

    puts("\narreglo depues de insercion de nuevo elemento :");
    imprimeVector(vec,MAX);
    return 0;
}
