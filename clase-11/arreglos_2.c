#include<stdio.h>

int main(){

    // Forma #2 de crear el arreglo del ejemplo:
    int edades[]={23,11,19,44,25,18,29};

    int i;
    for(i=0;i<7;i++){
        printf("\n\t edad[%d] = %d  DIR(%p)",i,edades[i],&edades[i]);
    }

    printf("\n\n");
    return 0;
}