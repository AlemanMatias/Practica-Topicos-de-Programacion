#include "funciones.h"

int CantPalalbrasEnCadena(char* cadena,char* palabra)
{
    int cantPal=0;

    SecuenciaCadena lectCadena;
    crearSecuencia(&lectCadena,cadena);

    Palabra palOriginal;
    myStringCopy(palOriginal.palabra,palabra);
    convertCadToMayus(palOriginal.palabra);

    while(!lectCadena.finCadena){
        Palabra palComp;                              //  En Cada ciclo while
        SecuenciaCadena lectPalabra;                  //se crea una nueva secuencia para
        crearSecuencia(&lectPalabra,palComp.palabra); //una nueva palabra.

        //printf("-%p-",lectPalabra.cursor);          //Prueba de que siempre reciclo la misma direccion para guardar una nueva palabra

        while(esLetra(lectCadena.cursor)){            // En este ciclo Se guardara una palabra
            *lectPalabra.cursor=*lectCadena.cursor;   //en la secuencia creada anteriormente.
            convertMayus(lectPalabra.cursor);         // A su vez se convertira a mayuscula cada letra
            lectPalabra.cursor++;
            lectCadena.cursor++;
        }
        *lectPalabra.cursor = '\0';// Aca cierro la cadena

        if(myStringComp(palComp.palabra,palOriginal.palabra))
            cantPal++;

        if(!*lectCadena.cursor)
            lectCadena.finCadena=true;

        lectCadena.cursor++;
    }
    return cantPal;
}
