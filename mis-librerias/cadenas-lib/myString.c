#include "myString.h"

bool esPalindromo(char *cadena)
{
    int flag=0,cantLetras=0;
    SecuenciaCadena lectura;
    crearSecuencia(&lectura,cadena);
    SecuenciaCadena lecturaLetraAdelante;
    SecuenciaCadena lecturaLetraAtras;

    while(*lectura.cursor){ // en este while mi objetivo es detectar la primer letra y la ultima de una cadena, si no encuentra ninguna, la cadena esta vacia
        convertMayus(lectura.cursor);
        if(esLetra(lectura.cursor) && flag==0){
            crearSecuencia(&lecturaLetraAdelante,lectura.cursor);
            flag = 1;
        }
        if(esLetra(lectura.cursor)){
            crearSecuencia(&lecturaLetraAtras,lectura.cursor);
            cantLetras++;
        }
        lectura.cursor++;
    }
    if(!cantLetras && !*lectura.cursor){ // Si flag=0 entonces nunca se encontro una letra, por ende la cadena esta vacia o no contiene letras
            lectura.finCadena=true;
            puts("LA CADENA ESTA VACIA DE LETRAS, EL PROGRAMA FINALIZARA.\n");
            exit(0);
    }
    for(int i=0;i<cantLetras/2;i++){
        if(*lecturaLetraAdelante.cursor != *lecturaLetraAtras.cursor)
            return false;

        lecturaLetraAdelante.cursor++;
        while(!esLetra(lecturaLetraAdelante.cursor))
            lecturaLetraAdelante.cursor++;

        lecturaLetraAtras.cursor--;
        while(!esLetra(lecturaLetraAtras.cursor))
            lecturaLetraAtras.cursor--;

    }
    return true;

}

void convertMayus(char *letra)
{

    if(*letra>='a' && *letra<='z')
        *letra=*letra-('a'-'A');
}

bool esLetra(char *car)
{
    if((*car>='a' && *car<='z') || (*car>='A' && *car<='Z'))
        return true;
    else
        return false;
}

void crearSecuencia(SecuenciaCadena *secChar,char *cadena)
{
    secChar->cursor = cadena;
    secChar->finCadena = false;
}
