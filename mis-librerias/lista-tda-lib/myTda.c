#include "myTda.h"

void crearLista(Lista *pl)
{
    pl->ce=0;
    pl->cap=CAP;
}

int llenarLista(Lista *pl)
{
    puts("Inserte elementos en la lista (para terminar llene la lista o presione n)");
    if(!continuar()){
        puts("No se inserto ningun elemento en la lista.");
        return LISTA_VACIA;
    }

    for(int i=0;i<pl->cap;i++){
        printf("posicion %d : ",i+1);
        fflush(stdin);
        scanf("%d",&pl->vec[i]);
        pl->ce++;
        if(pl->ce == pl->cap){
            puts("NO se pueden cargar mas elementos.");
            return TODO_OK;
        }
        if(!continuar())
            return TODO_OK;
    }
    return TODO_OK;
}

void listar(Lista *pl)
{
    puts("\n* * * * * * * LISTA * * * * * * * *");
    for(int i=0;i<pl->ce;i++)
        printf("%d ",pl->vec[i]);
    puts("\n* * * * * * * * * * * * * * * * * * \n");
}

bool estaEnRango(int elem,int lim1,int lim2)
{
    if(elem>=lim1 && elem<=lim2)
        return true;
    else{
        puts("Numero incorrecto, ingrese otro.");
        return false;
    }
}

int insertarListaPos(Lista *pl, int elem, int pos)
{
    if(pl->ce == pl->cap)
        return SIN_MEM;

    int *j;

    for(j=pl->vec+((pl->ce)-1) ; j>=pl->vec+pos-1 ; j--)
        *(j+1) = *j;

    pl->vec[pos-1]=elem;

    pl->ce++;

    return TODO_OK;
}

int insertarListaOrd(Lista *pl,int elem)
{
    if(pl->ce == pl->cap)
        return SIN_MEM;

    int *inicio=pl->vec; // posiciono el puntero i en el comienzo del vector
    int *fin=pl->vec + (pl->ce) - 1; // posiciono el puntero j en el final de la lista

    while((inicio<=fin && *inicio < elem ))
        inicio++;// i terminara posicionado en el elemento de la lista a reemplzar

    if(inicio<=fin && *inicio==elem)
        return DUPLICADO;

    int *i;

    for(i=fin;i>=inicio;i--)
        *(i+1)=*i;

    *inicio=elem;
    pl->ce++;

    return TODO_OK;

}

bool continuar()
{
    char car;

    printf("\n¿desea Continuar? presione y/n : ");
    do{
        fflush(stdin);
        scanf("%c",&car);
        convertMinus(&car);
    }while(!esLetra(&car) || (car!='y' && car!='n'));

    if(car=='y')
        return true;
    else
        return false;
}
