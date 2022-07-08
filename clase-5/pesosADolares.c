#include<stdio.h>
#define VALOR_DOLAR 0.0495762
// Preprosessor comands

int main(){

    double pesos, dolares;

    printf("\n\t Monto en pesos $");
    scanf("%lf",&pesos);

    // Fórmula para transformar de pesos a dólares... 
    dolares=pesos*VALOR_DOLAR;

    //2.54876243 -> %.2f -> 2.55
    printf("\n\t %.2lf pesos equivalen a %.2lf dolares",pesos,dolares);

    printf("\n\n");
    return 0;
}