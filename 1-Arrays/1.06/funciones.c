#include "header.h"

bool esLetra(char *car) // retorna un true si es letra
{
    if((*(car)>='A' && *(car)<='Z') || (*(car)>='a' && *(car)<='z'))
        return true;
    else
        return false;
}

bool esPalindromo(char *cadena)
{
    RecorreCadena recInicio;
    siguienteLetraAdelante(&recInicio,cadena);

    RecorreCadena recFin;
    posicionarCursosrUltimaLetra(&recFin,cadena);

    for(int i=0;i<=(cantLetras(cadena)/2);i++){
        if(*recInicio.cursor != *recFin.cursor)
            return false;
        siguienteLetraAdelante(&recInicio,recInicio.cursor+1);
        siguienteLetraAtras(&recFin,recFin.cursor-1);
    }
    return true;
}

int cantLetras(char *cadena) // Cuenta la cantidad de letras de la cadena
{
    RecorreCadena cuentaLetras;
    cuentaLetras.cursor = cadena;
    int cant=0;
    while(*cuentaLetras.cursor){
        if(esLetra(cuentaLetras.cursor))
            cant++;
        cuentaLetras.cursor++;
    }
    return cant;
}

void siguienteLetraAdelante(RecorreCadena *recIni,char *cadena) // posiciona el cursor en el primer caracter de la cadena desde atras hacia adelante
{
    recIni->cursor = cadena;
    while(!esLetra(recIni->cursor))
        recIni->cursor++;
}
void siguienteLetraAtras(RecorreCadena *recFin,char *cadena) // posiciona el cursor en el primer caracter de la cadena desde adelante hacia atras
{
    recFin->cursor = cadena;
    while(!esLetra(recFin->cursor))
        recFin->cursor--;
}

void posicionarCursosrUltimaLetra(RecorreCadena *recFin,char *cadena)// posiciona el cursor en el ultimo caracter de la cadena
{
    recFin->cursor = cadena;
    while(*recFin->cursor != '\0'){
        recFin->cursor++;
    }
    recFin->cursor--;// Aca el cursor se posiciona uno antes del caracter nulo
    while(!esLetra(recFin->cursor))
        recFin->cursor--;
}
