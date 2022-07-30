#include<stdio.h>

void imprimir_arreglo(int* arreglo, int tam);

int main(){

    // El nombre de arreglo es también el nombre
    // de un apuntador que apunta a la primera 
    // dirección del arreglo:
    int listaA[] = {10,20,30,40,50,60,70,80};
    int listaB[] = {23,11,0,4,19,8,7,81};
    int listaC[] = {9,1,9,2,3,4,6,2,12,14,15,16};

    imprimir_arreglo(listaA,8);
    imprimir_arreglo(listaB,8);
    imprimir_arreglo(listaC,12);

    printf("\n\n");
    return 0;
}

void imprimir_arreglo(int* arreglo, int tam){
    int i;
    printf("\n\t Arreglo: ");
    for(i=0;i<tam;i++){
        printf(" %d",*(arreglo+i));
    }
}


/*
    10 <- fe0204
    20 <- fe0208

*/