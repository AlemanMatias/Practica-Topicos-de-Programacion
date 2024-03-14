#include "funciones.h"

int valorNumericoDeCadena(char *cadena)
{
    int cantNum = 0;
    SecuenciaCadena lectura;
    crearSecuencia(&lectura,cadena);
    while(*lectura.cursor){
        if(!esNumero(lectura.cursor))
            return -1;//devuelve un -1 si se encuentra aunque sea un caracter que no sea un digito
        lectura.cursor++;
        cantNum++;
    }
    if(cantNum==0)
        return -1;//devuelve un -1 si la cadena esta vacia
    lectura.cursor--;//me posiciono en el utlimo digito antes del char nulo

    int multi=1,valorNumerico=0;
    for(int i=0;i<cantNum;i++)
    {
        valorNumerico+=(*lectura.cursor - '0')*multi;
        multi*=10;
        lectura.cursor--;
    }
    return valorNumerico;
}
