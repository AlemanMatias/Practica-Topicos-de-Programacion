#include "funciones.h"

int main()
{
    char cadena1[TAM_MAX];
    char cadena2[TAM_MAX];
    char arrayB[2][TAM_MAX];

    puts("Ingresar por teclado pares de cadenas de caracteres, finalizando el ingreso cuando");
    puts("ambas cadenas sean iguales (las que no deben procesarse).\n");

    ingreseCadenas(cadena1,cadena2);
    int tam1=tamanioCadena(cadena1);
    int tam2=tamanioCadena(cadena2);
    int comp=myStringComp2(cadena1,cadena2);

    while(!(comp==0)){
        if(((tam1==tam2)&&(comp==-1)) || (tam1<tam2))
            guardarCadenasenArrayBi(cadena1,cadena2,arrayB[0],arrayB[1]);
        else
            guardarCadenasenArrayBi(cadena1,cadena2,arrayB[1],arrayB[0]);

        printf("\n%s-%s\n",arrayB[0],arrayB[1]);

        ingreseCadenas(cadena1,cadena2);
        tam1=tamanioCadena(cadena1);
        tam2=tamanioCadena(cadena2);
        comp=myStringComp2(cadena1,cadena2);
    }
    puts("\n##cadenas iguales##");
    puts("PROGRAMA FINALIZADO");

    return 0;
}

