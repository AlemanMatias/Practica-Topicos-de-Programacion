#include <stdio.h>
#include <stdbool.h>

int resto(int ,int );
bool NoesNatural(int );
int sumaPrimerosNaturalesPares(int );

int main()
{
    int a;
    do{
        printf("Ingrese un numero natural a : ");
        scanf("%d",&a);
    }while(NoesNatural(a));

    printf("\nLa suma de los primeros %d numeros naturales pares de : %d.\n",a,sumaPrimerosNaturalesPares(a));

    return 0;
}

int sumaPrimerosNaturalesPares(int num)
{
    int total=0,i=0,j=0;
    while(j<num){
        if(resto(i,2)==0){
            total+=i;
            j++;
            printf("-%d-",i);
        }
        i++;
    }
    return total;
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

bool NoesNatural(int num)
{
    if(num<0)
        return true;
    else
        return false;
}
