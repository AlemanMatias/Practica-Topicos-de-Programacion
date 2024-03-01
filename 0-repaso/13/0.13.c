#include<stdio.h>
#include<stdbool.h>

bool esPrimo(int);
bool NoesNatural(int );
int resto(int ,int );


int main()
{
    int a;
    do{
        printf("Ingrese un numero natural para saber si es primo : ");
        scanf("%d",&a);
    }while(NoesNatural(a));

    if(esPrimo(a))
        printf("\nEl numero %d SI es Primo.\n",a);
    else
        printf("\nEl numero %d NO es Primo.\n",a);

    return 0;
}

bool esPrimo(int num)
{
    int total=0,j=0;

    for(int i=2;i<=num;i++)
    {
        if(resto(num,i)==0 )
            j++;
        if(j>1)
            return false;
    }
    return true;
}


bool NoesNatural(int num)
{
    if(num<0)
        return true;
    else
        return false;
}

int resto(int a,int b)
{
    int aux=0,cociente=1,resto=0;

    aux=a-b;
    while(aux>=b){
        cociente++;
        aux-=b;
    }
    return aux;
}
