#include "funciones.h"

int main()
{
    Lista listaOrd;
    puts("Inserte elementos de ordenados de forma ascendente :");
    crearLista(&listaOrd);
    if(!llenarLista(&listaOrd)){
        puts("Lista vacia, el programa se cerrara.\n");
        return 0;
    }
    listar(&listaOrd);
    int num;

    printf("\nIngrese un numero para colocarlo en la lista ordenada :");
    scanf("%d",&num);

    int res = insertarListaOrd(&listaOrd,num);

    if(res==2)
        printf("\nEl elemento ingresado ,%d ,ya existe en la lista.\n",num);

    else if(res)
            listar(&listaOrd);
        else
            puts("\n#MEMORIA LLENA#\n");

    return 0;
}
