#include<stdio.h>

int main(){

    // Entradas:
    float sinIVA, conIVA;
    printf("\n\t Dame un monto sin IVA: $");
    scanf("%f",&sinIVA);

    //Cálculo:
    conIVA = sinIVA*1.16;

    //Salida:
    printf("\n\t El monto con IVA es: $%.2f",conIVA);

    printf("\n");
    return 0;
}