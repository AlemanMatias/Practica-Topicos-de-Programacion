#include<stdio.h>
#include<stdbool.h>

bool perteneceAFibonacci(int);

int main()
{
    int num;
    printf("Ingrese un numero entero positivo para saber si este pertenece a la serie de Fibonacci : ");
    scanf("%d",&num);
    while(num<0)
    {
        printf("\n#ERROR#\n");
        printf("\nIngrese un numero entero positivo para saber si este pertenece a la serie de Fibonacci : ");
        scanf("%d",&num);
    }

    if(perteneceAFibonacci(num))
        printf("\nEl numero %d SI Pertenece a la serie de Fibonacci.\n",num);
    else
        printf("\nEl numero %d NO Pertenece a la serie de Fibonacci.\n",num);

    return 0;
}

bool perteneceAFibonacci(int num)
{
    int anteUltimo=1,ultimo=1;

    if (num==1 || num==0)
        return true;
    else{
        while((ultimo+anteUltimo)<=num)
        {
            int total = anteUltimo + ultimo;
            if(total == num)
                return true;
            else{
                anteUltimo=ultimo;
                ultimo=total;
            }
        }
    }
    return false;
}
