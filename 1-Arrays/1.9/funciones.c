#include "funciones.h"

char * normalizarCadena (char *cadena)
{
    SecuenciaCadena lectCadena;
    crearSecuencia(&lectCadena,cadena);// se crea una secuencia para la lectura de la cadena

    SecuenciaCadena escrCadena;
    crearSecuencia(&escrCadena,cadena);// se crea una secuencia para la escritura en la cadena original ///////////

    while(!lectCadena.finCadena){
        Palabra pal;
        SecuenciaCadena escrPal;
        crearSecuencia(&escrPal,pal.palabra);// se crea una secuencia para la escritura de una nueva palabra

        SecuenciaCadena lectPal;
        crearSecuencia(&lectPal,pal.palabra);

        while(esLetra(lectCadena.cursor)){
            *escrPal.cursor = *lectCadena.cursor;
            convertMinus(escrPal.cursor);
            escrPal.cursor++;
            lectCadena.cursor++;
            if(!esLetra(lectCadena.cursor)){ // si en la siguiente direccion no se encuentra una letra se dara como finalizada la palabra
                convertMayus(pal.palabra);
                finalizarCadena(escrPal.cursor);
                while(*lectPal.cursor){
                    *escrCadena.cursor = *lectPal.cursor;
                    escrCadena.cursor++;
                    lectPal.cursor++;
                }
                *escrCadena.cursor = ' ';
                escrCadena.cursor++;
            }
        }
        if(!*lectCadena.cursor){
            lectCadena.finCadena=true;
            if(*escrCadena.cursor==*cadena)
                return "### CADENA VACIA DE TEXTO ###";
            escrCadena.cursor--;
            finalizarCadena(escrCadena.cursor);
        }
        lectCadena.cursor++;
    }
    return cadena;
}

