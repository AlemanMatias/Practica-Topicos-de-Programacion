#include "header.h"

int main()
{
    int vec[MAX]={3,2,1,55,7,4,3,99,3,6},num;
    puts("vector original : ");
    imprimeVector(vec,MAX);
    printf("Ingrese numero para eliminar su primera aparicion en el arreglo : ");
    scanf("%d",&num);
    if(eliminaElemVec(vec,MAX,num)){
        puts("\nAsi queda el arreglo despues de la eliminacion : ");
        imprimeVector(vec,MAX-1);
    }
    else{
        puts("\nEl numero ingresado no se encontro.");
        puts("NO se elimino ningun elemento");
    }
    return 0;
}
