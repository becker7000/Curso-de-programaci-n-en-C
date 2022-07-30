#include<stdio.h>

int main(){

    // Imprimir 'á' con secuencia de escape:
    printf("\n\t 1) \xa0 ");

    // Imprimir '@' con secuencia de escape:
    printf("\n\t 2) \x40 ");

    // Imprimir '&' con secuencia de escape:
    printf("\n\t 3) \x26 ");

    // Imprimir 'ñ' con secuencia de escape:
    printf("\n\t 4) cumplea\xa4os ");

    // Imprimir '¿' con secuencia de escape:
    printf("\n\t 5) \xa8 ");

    printf("\n");
    return 0;
}