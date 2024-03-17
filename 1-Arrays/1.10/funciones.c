#include "funciones.h"

char* desofuscarCadena(char* cadenaOf, char* grupoLet)
{
    SecuenciaCadena lectCadenaOf;
    crearSecuencia(&lectCadenaOf,cadenaOf);//Se crea secuencia para lectura de la cadena ofuscada

    SecuenciaCadena lectGrupoLet;
    crearSecuencia(&lectGrupoLet,grupoLet);

    while(!lectCadenaOf.finCadena){
        int posLetra=1;
        while(esLetra(lectCadenaOf.cursor)){
            char letra=busquedaLetraCorrecta(*lectCadenaOf.cursor,lectGrupoLet.cursor,grupoLet,posLetra);
            if(letra){
                *lectCadenaOf.cursor = letra;
                lectGrupoLet.cursor = grupoLet;//Se reinicia el cursor de lectura del grupo de letras
            }
            lectCadenaOf.cursor++;
            posLetra++;
        }
        if(!*lectCadenaOf.cursor)
            lectCadenaOf.finCadena=true;
        lectCadenaOf.cursor++;
    }
    return cadenaOf;
}

char busquedaLetraCorrecta(char letra,char* cursor,char* reinicioCursor,int pos) // cursor debe apuntar a la letra correcta
{
    while(*cursor){
        if(letra==*cursor){
            for(int i=0;i<pos;i++){
                cursor++;
                if(!*cursor)
                    cursor=reinicioCursor;
            }
            return *cursor;
        }
        cursor++;
    }
    return '\0';
}

