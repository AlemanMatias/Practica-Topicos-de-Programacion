#include<stdio.h>
#include <stdbool.h>
/*
    Correccion :
    No es conveniente forzar al usuario a poner un numero que cumpla la condicion de otro puesto anteriormente.
    El usuario debe tener la menor interaccion posible con el teclado y no tiene porque pensar el porque un numero
     no cumple ciertas condiciones, para ello lo mejor es pedirle al usuario que de 2 numeros al azar ,
     y de ahi el programa se encargara de evaluar si ambos numeros cumplen con las condiciones para realizar el calculo combinatorio.
*/
int factorial(int);
bool esNegativo(int);
bool esMenorA(int,int); //numero a es menor a b
int combinatoria(int,int);

int main(){
    int m,n;

    printf("Ingrese un numero n positivo :");
    do{
        scanf("%d",&n);
    }while(esNegativo(n));

    printf("Ingrese un numero m, mayor o igual a n = %d :",n);
    do{
        scanf("%d",&m);
    }while(esMenorA(m,n));

    printf("\nEl numero combinatorio entre %d y %d es %d.",m,n,combinatoria(m,n));

    return 0;
}

int combinatoria(int m,int n)
{
    int r = (factorial(m))/(factorial(n)*factorial(m-n));

    return r;
}

bool esMenorA(int a,int b)
{
    if(a<b)
        return true;
    else
        return false;
}

int factorial(int n)// debe ser mayor o igual a 0
{
    int r=1;
    if(n==0){
        r = 1;
        return r;
    }
    else{
        for(int i=1; i<=n ; i++)
            r*=i;
        return r;
    }
}
bool esNegativo(int n)
{
    if(n>=0)
        return false;
    else{
        printf("#ERROR-NUMERO-NEGATIVO#\n");
        printf("Ingrese un nuevo numero : ");
        return true;
    }
}
