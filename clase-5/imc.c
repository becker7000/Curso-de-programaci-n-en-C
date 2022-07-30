#include<stdio.h>

int main(){

    float masa, estatura,imc;
    // imc es ínidice de masa corporal

    printf("\n\t Masa(kg): ");
    scanf("%f",&masa);

    printf("\n\t Estatura(m): ");
    scanf("%f",&estatura);

    // Linealizamos la formula del imc
    imc = (masa)/(estatura*estatura);

    // Nota: %c es el código de formato ASCII para imprimir un caracter...
    printf("\n\t Tu %cndice de masa corporal es: %.3f",161,imc);

    printf("\n\n");
    return 0;
}