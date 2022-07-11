#include<stdio.h>

int main(){

    float valor;

    printf("\n\t Dame un numero: ");
    scanf("%f",&valor);

    // Así sabemos si el número es positivo
    // En caso de que sólo tengamos una sentencia a ejecutar 
    // dentro de un if, podemos no usar {} (bloque de código)
    if(valor>0)
        printf("\n\t El numero es positivo..."); // Sentencia simple
    

    // Así sabemos si el número es negativo
    // Si queremos que varias sentencia se ejecuten 
    // al cumplirse la condicion de un if debemos meter
    // las sentencias en un bloque de código...
    if(valor<0){
        printf("\n\t El numero es negativo...");
        printf("\n\t Aqui hay otra sentencia ");
    } // Sentencia compuesta

    printf("\n\n");
    return 0;
}


