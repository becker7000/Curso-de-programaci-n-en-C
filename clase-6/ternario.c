#include<stdio.h>

int main(){

    int edad;

    printf("\n\t Dame tu edad: ");
    scanf("%d",&edad);

    // Sintáxis de el operador ternario:
    // (Condición) ? sentencia1 : sentencia2 
    printf("\n\t [%s]",((edad>=18)? "Eres mayor de edad" : "Eres menor de edad" ));

    printf("\n\n");
    return 0;
}