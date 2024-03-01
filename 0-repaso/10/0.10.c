#include<stdio.h>
#include<stdbool.h>

bool NoesNatural(int);
int sumaPrimerosNaturales(int);

int main()
{
    int a;
    do{
        printf("Ingrese un numero natural a : ");
        scanf("%d",&a);
    }while(NoesNatural(a));
    printf("\nLa suma de los primeros %d numeros naturales es de : %d",a,sumaPrimerosNaturales(a));

    return 0;
}

int sumaPrimerosNaturales(int n)
{
    int total=0;
    for(int i=0;i<=n;i++)
        total+=i;
    return total;
}

bool NoesNatural(int num)
{
    if(num<0)
        return true;
    else
        return false;
}
