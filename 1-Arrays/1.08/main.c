#include "funciones.h"
/*
    Lote de pruebas cadenas :
        "El 28 de julio de 1914 estallo la 1ra guerra mundial, mas conocida como la gran Guerra o la guerra que acabaria con todas las guerras"
        "La vida es bella, bella como una flor. Una flor hermosa y hermosa como el sol."
        "La vida es bella, ¿que seria de la vida si no tuvieramos vida alrededor?¿Realmente podriamos llamar a eso vida?"
*/

int main()
{
    char palabra[]={"Vida"};// Palabra a buscar en cadena
    char cadena[]={"La vida es bella, ¿que seria de la vida si no tuvieramos vida alrededor?¿Realmente podriamos llamar a eso vida?"};

    printf("la palabra '%s' se repite %d veces en la cadena .",palabra,CantPalalbrasEnCadena(cadena,palabra));

    return 0;
}
