#include<stdio.h>

// Arte ASCII:

int main(){

    int i=0,j=0;
    int pisos;
    int simbolo; //Char también es un entero (0-255).

    printf("\n\t Cuantos pisos? => ");
    scanf("%d",&pisos);
    printf("\n\t Decimal del ASCII: ");
    scanf("%d",&simbolo);

    // Whiles anidados:
    while(i<=pisos){
        printf("\n\t ");
        j=0;
        while(j<i){
            printf("%c ",simbolo);
            j++;
        }
        i++;
    }

    printf("\n\n");
    return 0;
}


/*  TAREA:

    Imprimir consola las siguientes figuras: 

         *
       * *
     * * *         

        *
       * *
      * * *    
       * * 
        *
        
        *
       * *
      * * *
     * * * * 
       * *
       * *
       * *    Centrar el tallo


*/