#include<stdio.h>
#include<math.h>

float raizCuadradaSerie(float,float);

int main()
{
    float num,tol;
    printf("Ingrese un numero positivo para calcular la raiz cuadrada : ");
    scanf("%f",&num);
    while(num<=0)
    {
        printf("\n###ERROR-NUMERO-NO-POSITIVO###\n");
        printf("Ingrese un numero positivo : ");
        scanf("%f",&num);
    }

    printf("ingrese una tolerancia : ");
    scanf("%f",&tol);

    float res = raizCuadradaSerie(num,tol);

    printf("\nEl resultado aprocimado de la raiz cuadrada de %f es : %f.\n",num,res);

    return 0;
}

float raizCuadradaSerie(float numero,float tol)
{
    int flag=0,dif=0;
    float ultimoTermino=1,terminoActual=1;

    while(flag==0 || fabs(terminoActual-ultimoTermino)>tol) // recordar que en estos casos cuando se hace la diferencia de un numero, nunca debe ser negativa...por eso uso la funcion fabs, que nos da el valor absoluto de un numero
    {
        if(flag == 0 ){
            terminoActual = (0.5)*((ultimoTermino)+(numero/ultimoTermino));
            flag = 1;
        }
        else{
            ultimoTermino = terminoActual;
            terminoActual = (0.5)*((ultimoTermino)+(numero/ultimoTermino));
        }
    }

    return terminoActual;
}
