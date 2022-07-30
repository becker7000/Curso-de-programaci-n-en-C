#include<stdio.h>

int main(){

    //Vamos a calcular el monto pero ya con 15% de descuento...
    float monto;

    printf("\n\t Dame el monto: ");
    scanf("%f",&monto);

    // El monto es el 100%, por lo tanto si descontamos 
    // el 15%, entonces tenemos un 85%...
    printf("\n\t El monto ya con el 15%c de descuento es: %.2f",37,(monto*0.85));

    printf("\n");
    return 0;
}