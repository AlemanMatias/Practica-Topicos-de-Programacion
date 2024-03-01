#include <stdio.h>
#include <stdbool.h>

float serie(int,float);
double factorial(int);
double potenciaDeXalaN (int ,int );

int main()
{
    int x;
    float tol;

    printf("Ingrese un numero entero  entero x , para calcular e^x :");
    scanf("%d",&x);
    printf("\nIngrese un valor de tolerancia :");
    scanf("%f",&tol);
    printf("\nEl valor de e^%d aproximado por serie, es : %f . ",x,serie(x,tol));

    return 0;

}

double potenciaDeXalaN(int x,int n) // solo acepta valores positivos
{
    double total=1;

    for(int i=0;i<n;i++)
        total*=x;

    return total;
}

float serie(int n,float tol)
{
    float res=1,termino=1;
    int i=1,j=1;
    while((termino > tol) || (i==1))
    {
        j++;
        termino = ((potenciaDeXalaN(n,i))/(factorial(i)));
        i++;
        res+=termino;
    }

    return res;

}
double factorial(int num)
{
    double total=1;
    if(num==0)
        return 1;
    else{
        for(int i=1;i<=num;i++)
            total*=i;
    }
    return total;
}
