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

void crearSecuencia(SecuenciaCadena *secChar, char *cadena)
{
    secChar->cursor = cadena;
    secChar->finCadena = false;
}

bool esLetra(char *car)
{
    if((*car>='a' && *car<='z') || (*car>='A' && *car<='Z'))
        return true;
    else
        return false;
}

bool esNumero(char *car)
{
    if((*car)>='0' && (*car)<='9')
        return true;
    else
        return false;
}

void convertCadToMayus(char *cadena)
{
    while(*cadena){
        convertMayus(cadena);
        cadena++;
    }
}

void convertMinus(char *letra)
{
    if(*letra>='A' && *letra<='Z')
        *letra=*letra+('a'-'A');
}

void convertMayus(char *letra)
{
    if(*letra>='a' && *letra<='z')
        *letra=*letra-('a'-'A');
}

bool myStringComp(char *cadena1 ,char *cadena2)
{
    while((*cadena1) == (*cadena2)){
        cadena1++;
        cadena2++;
        if(!(*cadena1) && !(*cadena2))
            return true;
    }
    return false;
}

int myStringComp2(char *cadena1, char *cadena2)
{
    int tam1=tamanioCadena(cadena1);
    int tam2=tamanioCadena(cadena2);

    char aux1[tam1+1];
    char aux2[tam2+1];

    SecuenciaCadena lect1;
    crearSecuencia(&lect1,aux1);
    SecuenciaCadena lect2;
    crearSecuencia(&lect2,aux2);

    myStringCopy(aux1,cadena1);
    myStringCopy(aux2,cadena2);

    convertCadToMayus(aux1);
    convertCadToMayus(aux2);

    while(*lect1.cursor && *lect2.cursor){
        if(*lect1.cursor > *lect2.cursor)
            return 1;// 1 = la cadena 1 es mayor a la 2
        else if(*lect1.cursor < *lect2.cursor)
            return -1;// -1 = la cadena 1 es menor a la 2
        else{
            lect1.cursor++;
            lect2.cursor++;
        }
        if(!*lect1.cursor && !*lect2.cursor)
            return 0;// 0 = cadenas iguales
    }
    if(!*lect1.cursor)
        return -1;
    return 1;
}

bool letrasIguales(char letra1, char letra2)
{
    convertMinus(&letra1);
    convertMinus(&letra2);
    if(letra1==letra2)
            return true;
    return false;
}

void myStringCopy(char *destino ,char *origen)
{
    while(*origen){
        *destino=*origen;
        destino++;
        origen++;
    }
    *destino='\0';
}

void finalizarCadena(char *cadena)
{
    *cadena = '\0';
}

int tamanioCadena (char *cadena)
{
    int tamanio=0; // El 1 es el caracter nulo

    while(*cadena){
        cadena++;
        tamanio++;
    }

    return tamanio;
}
