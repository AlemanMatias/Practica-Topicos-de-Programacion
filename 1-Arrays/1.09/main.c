#include "funciones.h"

/*
    Lote de pruebas cadenas :
        -"$5Age  &,oF /   MitoLogy&$1 es$% un´buen´jUEGO(9 dE $$estraTegia,Pero&ç´`aUn asI       PREFIERO&/eL·$Age/////of·##~#€#empireS%%%  "
        -"%·6((·&&"&$/"/"
        -"/5hOla&"
        -"EjEmPlo DE Cadena a NormaLizar !"
*/
int main()
{
    char cadena[]={"$5Age  &,oF /   MitoLogy&$1 es$% un´buen´jUEGO(9 dE $$estraTegia,Pero&ç´`aUn asI       PREFIERO&/eL·$Age/////of·##~#€#empireS%%%  "};

    printf("Cadena antes de normalizarla : %s",cadena);

    puts("\n\nCadena normalizada :");
    printf("%s.\n",normalizarCadena(cadena));


    return 0;
}
