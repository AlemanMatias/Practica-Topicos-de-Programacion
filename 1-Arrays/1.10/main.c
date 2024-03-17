#include "funciones.h"

int main()
{
    char cadena[]={"Nj qemh v ljs kraenkqbres; lj oqe qemh es oqevorme sgn ellhs --Istqt Asdmgj"}; //No temo a los ordenadores; lo que temo es quedarme sin ellos Isaac Asimov
    char grupo[]={"abcdghijkoqtuv"};
    printf("La cadena ofuscada es : %s ",cadena);
    puts("\n");
    printf("La cadena desofuscada es : %s",desofuscarCadena(cadena,grupo));
    puts("\n");

    return 0;
}
