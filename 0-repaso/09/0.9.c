#include<stdio.h>
#include<stdbool.h>

bool NoesNatural(int);
int divAsobreB(int,int);


int main()
{
    int a,b;
    do{
        printf("Ingrese un numero natural a : ");
        scanf("%d",&a);
    }while(NoesNatural(a));
    do{
        printf("\nIngrese un numero natural b : ");
        scanf("%d",&b);
    }while(NoesNatural(b) || b==0);

    printf("\nresultado = %d \n",divAsobreB(a,b));

    return 0;
}

int divAsobreB(int a,int b)
{
    int aux=0,cociente=1,resto=0;

    aux=a-b;
    while(aux>=b){
        cociente++;
        aux-=b;
    }
    printf("\nresto = %d",aux);

    return cociente;
}

bool NoesNatural(int num)
{
    if(num<0)
        return true;
    else
        return false;
}
