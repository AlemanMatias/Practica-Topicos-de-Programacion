#include "header.h"
/*Lote de pruebas Palindromos:
        -Anita lava la tina
        -Amo la pacifica paloma
        -A mama Roma le aviva el amor a papa y a papa Roma le aviva el amor a mama
        -La tele letal
        -¿Nadan o no nadan?
        -Seres, somos seres

  Lote de pruebas NO Palindromos:
        -""//cadena vacia
        -"12451 5·%5  5"
        -"Hola, esta frase no es un palindromo"

*/
int main()
{
    char cadena[]={"Seres, somos seres"};

    if(esPalindromo(cadena))
        puts("La cadena SI es un palindromo");
    else
        puts("La cadena NO es un palindromo");

    return 0;
}
