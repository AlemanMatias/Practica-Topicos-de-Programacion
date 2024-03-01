#include<stdio.h>

int clasificacion(int);

int main()
{
    int num;
    printf("Ingrese un numero positivo, para saber si es PERFECTO,ABUNDANTE o DEFICIENTE : ");
    scanf("%d",&num);
    while(num<=0)
    {
        printf("\n###ERROR###\n");
        printf("Ingrese un numero positivo, para saber si es PERFECTO,ABUNDANTE o DEFICIENTE : ");
        scanf("%d",&num);
    }
    switch(clasificacion(num))
    {
    case 0:
        printf("\nEl numero %d es PERFECTO.\n",num);
        break;
    case 1:
        printf("\nEl numero %d es ABUNDANTE.\n",num);
        break;
    case 2:
        printf("\nEl numero %d es DEFICIENTE.\n",num);
        break;
    default:
        printf("\n##error desconocido##\n");
        break;
    }
    return 0;
}

int clasificacion(int num)
{
    int sumaDivisores=0;

    for(int i=1;i<num;i++)
    {
        if((num%i)==0)
            sumaDivisores+=i;
    }
    if(sumaDivisores==num)
        return 0;
    else{
        if(sumaDivisores>num)
            return 1;
        else
            return 2;
    }
}
