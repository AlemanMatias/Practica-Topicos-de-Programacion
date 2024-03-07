#include "header.h"

int main()
{
    int vec[MAX]={3,7,1,55,7,4,3,7,3,6},num;
    puts("vector original : ");
    imprimeVector(vec,MAX);
    printf("Ingrese numero para eliminar todas sus apariciones en el arreglo : ");
    scanf("%d",&num);
    int cant=eliminaAparicionesVec(vec,MAX,num);
    if(cant){
        puts("\nAsi queda el arreglo despues de la eliminacion : ");
        imprimeVector(vec,MAX-cant);
    }
    else{
        puts("\nEl numero ingresado no se encontro.");
        puts("NO se elimino ningun elemento");
    }

    return 0;
}
