#include <stdio.h>
#include <stdbool.h>

double factorial(int);
bool esNegativo(int);
int main()
{
    int num;
    printf("Ingrese un numero entero positivo:");
    do{
        scanf("%d",&num);
    }while(esNegativo(num));

    printf("\nEl factorial de %d es %f.\n",num,factorial(num));

    return 0;
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


