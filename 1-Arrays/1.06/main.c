#include "header.h"
/*
    Todavia no contemple los siguientes casos :
        -Si una cadena esta vacia
        -Falta agregar funciones tolower y toupper , hechas por mi.
*/
int main()
{
    char cadena[]={"la ruta nos aporto otro paso natural"};//"adan no cede con eva, yave no cede con nada"

    if(esPalindromo(cadena))
        puts("La cedena SI es palindromo");
    else
        puts("La cedena NO es palindromo");

    return 0;
}
