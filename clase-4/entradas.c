#include<stdio.h>

int main(){

    //Entradas:
    int x;
    int cuadrado;

    //Más entradas:
    printf("\n\t Dame un n\xa3mero entero: ");
    scanf("%d",&x);  // & sirve para perdir la dirección en memoria de una variable...

    //Cálculo:
    cuadrado=x*x;
    
    //Salida:
    printf("\n\t El cuadrado de %d es %d",x,cuadrado);

    printf("\n");
    return 0;
}