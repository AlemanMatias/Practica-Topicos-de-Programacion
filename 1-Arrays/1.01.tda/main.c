#include "funciones.h"

/*
    Falta:
        -hacer que la funcion permita poner una posicion mas , siempre y cuando el vector no este lleno
*/

int main()
{
    Lista listaVec;
    crearLista(&listaVec);

    if(!llenarLista(&listaVec)){
        puts("El programa finalizara");
        return 0;
    }
    listar(&listaVec);
    int num,pos;

    printf("Ingrese un numero para colocar en la lista : ");
    fflush(stdin);
    scanf("%d",&num);

    printf("Ingrese una posicion entre 1 y %d para colocar en la lista : ",listaVec.ce);
    do{
        fflush(stdin);
        scanf("%d",&pos);
    }while(!estaEnRango(pos,1,listaVec.ce));


    if(insertarListaPos(&listaVec,num,pos))
        listar(&listaVec);
    else
        puts("\n#MEMORIA LLENA, NO SE PUEDE INSERTAR MAS ELEMENTOS EN LA LISTA#\n");

    return 0;
}

