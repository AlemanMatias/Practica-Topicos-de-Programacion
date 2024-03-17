#include "funciones.h"

void ingreseCadenas(char* cadena1, char* cadena2)
{
    printf("Ingrese cadena UNO : ");
    fgets(cadena1,TAM_MAX,stdin);
    arreglarCadena(cadena1);

    printf("Ingrese cadena DOS : ");
    fgets(cadena2,TAM_MAX,stdin);
    arreglarCadena(cadena2);

    if(*cadena1=='\0' || *cadena2=='\0'){
        puts("Una de las cadenas esta vacia, ingrese ambas de vuelta.");
        ingreseCadenas(cadena1,cadena2);
    }
}

void arreglarCadena(char *cadena)//el fgets imprime un \n en el ultimo lugar de la cadena, es por eso que esta funcion eliminara el salto de linea
{
    int tam=tamanioCadena(cadena);

    if(cadena[tam-1]=='\n')
        cadena[tam-1]='\0';
}

void guardarCadenasenArrayBi(char *cad1,char *cad2,char *dest1,char *dest2)
{
    myStringCopy(dest1,cad1);
    myStringCopy(dest2,cad2);
}
