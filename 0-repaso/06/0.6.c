#include<stdio.h>

double serieSen(int,float);
double factorial(int);
double potenciaDeXalaN (int ,int );

int main()
{
    int num;
    float tol;
    printf("Insertar valor de X para hallar sen(X) : ");
    scanf("%d",&num);
    printf("Ingrese una tolerancia : ");
    scanf("%f",&tol);

    printf("\nEl resultado de sen(%d) es igual a : %f.\n",num,serieSen(num,tol));

    return 0;
}

double serieSen(int num,float tol)
{
    int i=1;//se usa para la potencia
    int flag=0;
    double ultimoTermino = num,total = num;
    while(ultimoTermino > tol )
    {
        i+=2;
        if(flag==0){
            ultimoTermino=potenciaDeXalaN(num,i)/factorial(i);
            total-=ultimoTermino;
            flag=1;
        }
        else{
            ultimoTermino=potenciaDeXalaN(num,i)/factorial(i);
            total+=ultimoTermino;
            flag=0;
        }
        if(ultimoTermino<0)
                ultimoTermino*=-1;
    }
    return total;
}

double potenciaDeXalaN(int x,int n) // solo acepta valores positivos
{
    double total=1;

    for(int i=0;i<n;i++)
        total*=x;

    return total;
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
