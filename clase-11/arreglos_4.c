#include<stdio.h>

int main(){

    int aletorios[10];
    int i;

    // Así los número aleatorios serán diferentes
    // por cada ejecución:
    srand(time(NULL));

    // Generando un arreglo de números aleatorios:
    for(i=0;i<10;i++){
        aletorios[i]=rand()%50+10; // entre 10 y 59
        printf("\n\t a[%d] = %d",i,aletorios[i]);
    }

    printf("\n\n");
    return 0;
}