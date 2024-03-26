#include "funciones.h"

int main()
{
    Lista listaVec;
    crearLista(&listaVec);

    if(!llenarLista(&listaVec)){
        printf("\nLa lista esta vacia, el programa se cerrara\n");
        return 0;
    }
    listar(&listaVec);
    int pos;
    printf("Ingrese una posicion entre 1 y %d , para eliminar el elemento en dicha posicion : ",listaVec.ce);
    do{
        scanf("%d",&pos);
    }while(!estaEnRango(pos,1,listaVec.ce));

    if(eliminarListaPos(&listaVec,pos))
        listar(&listaVec);
    else
        puts("No se elimino ningun elemento de la lista.");

    return 0;


}
