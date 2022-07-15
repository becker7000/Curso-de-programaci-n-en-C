#include<stdio.h>
#include<math.h>

int main(){

    int resultado;
    int i; 

    for(i=0;i<=10;i++){
        resultado = pow(2,i); // Coersión implícita
        printf("\n\t 2^%d = %d ",i,resultado);
    }

    printf("\n\n");
    return 0;
}

// XCode o replit 

/*
    La coersion es la capacidad de un lenguaje para 
    transformar de tu tipo de dato a otro, existe 
    dos tipos de coersión: explícita e implícita.

    Explícita es forzada por el programador (casting).

    Implícita es en forma automática y se da cuanto 
    temos un dato pequeño(int) y un grande(double) el pequeño se transforma
    en automático en el grande.

*/


// Imprimir en consola el alfabeto al revés
// Imprimir los múltiplos de 3 entre 3 y 100
// Imprimir la tabla del 7...