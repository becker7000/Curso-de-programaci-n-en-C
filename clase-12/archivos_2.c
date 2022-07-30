#include<stdio.h>

int main(){

    FILE* archivo;

    // Creando un archivo o accediendo a él en caso de existir...
    archivo = fopen("nuevo.txt","wt");

    if(archivo==NULL){
        printf("\n\t El archivo esta disponible...");
    }else{
        printf("\n\t El archivo esta disponible...");
    }

    float sinIVA, conIVA;
    printf("\n\t Dame un monto sin IVA: ");
    scanf("%f",&sinIVA);
    conIVA = sinIVA*1.16;

    // fprintf nos ayuda a imprimir sobre un archivo...
    fprintf(archivo,"\n\t El monto con IVA es: %.2f",conIVA);

    fclose(archivo);

    printf("\n\n");
    return 0;
}