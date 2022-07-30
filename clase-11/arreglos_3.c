#include<stdio.h>

int main(){

    // Forma #3 de crear el arreglo del ejemplo:
    int edades[7];

    // Pidiendo las edades al usuario:
    int i;
    for(i=0;i<7;i++){
        printf("\n\t Edad[%d] = ",i);
        scanf("%d",&edades[i]);
    }

    // Imprimimos, posición, valor, dirección:
    for(i=0;i<7;i++){
        printf("\n\t edad[%d] = %d  DIR(%p)",i,edades[i],&edades[i]);
    }

    printf("\n\n");
    return 0;
}