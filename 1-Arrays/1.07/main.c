#include "funciones.h"
/*
    LA CADENA DEBE ESTAR CONFORMADA EN SU TOTALIDAD POR DIGITOS NUMERICOS
    NO SE CONTEMPLARA CADENA CON OTROS CARACTERES,ESPACIOS O VACIAS.
*/

int main()
{
    char digitos[]={"666"};
    int valor=valorNumericoDeCadena(digitos);

    if(valor!=-1)
        printf("La cadena de caracteres '%s' representa el valor numerico %d. ",digitos,valor);
    else
        puts("##LA CADENA NO CONTIENE CARACTERES NUMERICOS O ESTA VACIA##");



    return 0;
}


