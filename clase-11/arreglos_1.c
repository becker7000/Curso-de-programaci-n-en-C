#include<stdio.h>

int main(){

    // Forma #1 de crear el arreglo del ejemplo:

    //Declarando un arreglo en C:
    int edades[7];

    // Los arreglo en C tienen lógica 0:
    // Llenando el arreglo manualmente:
    edades[0]=23;
    edades[1]=11;
    edades[2]=19;
    edades[3]=44;
    edades[4]=25;
    edades[5]=18;
    edades[6]=29;

    int i; // Variable de control
    // %p (pointer) nos ayuda a imprimir 
    // una dirección de memoria.
    for(i=0;i<7;i++){
        printf("\n\t edad[%d] = %d  DIR(%p)",i,edades[i],&edades[i]);
    }

    printf("\n\n");
    return 0;    
}