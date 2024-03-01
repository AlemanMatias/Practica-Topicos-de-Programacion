#include<stdio.h>
#include<stdbool.h>

int productoSumSuc(int,int);
bool NoesNatural(int);

int main()
{
    int a,b;
    do{
        printf("Ingrese un numero natural a : ");
        scanf("%d",&a);
    }while(NoesNatural(a));
    do{
        printf("Ingrese un numero natural b : ");
        scanf("%d",&b);
    }while(NoesNatural(b));

    printf("\nEl producto entre a=%d y b=%d es : %d.\n",a,b,productoSumSuc(a,b));


}

int productoSumSuc(int n1,int n2)
{
    int total=0;
    for(int i=1;i<=n2;i++)
            total+=n1;

    return total;
}

bool NoesNatural(int num)
{
    if(num<0)
        return true;
    else
        return false;
}
