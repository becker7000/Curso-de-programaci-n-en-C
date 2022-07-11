#include<stdio.h>

int main(){

    // Hacer un código que pida un número e
    // imprima si un número es par o impar.
    int numero;

    printf("\n\t Dame un numero: ");
    scanf("%d",&numero);

    if((numero%2)==0)
        printf("\n\t El numero es par...");
    else
        printf("\n\t El numero es impar...");

    printf("\n\n");
    return 0;

}