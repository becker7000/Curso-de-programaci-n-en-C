/*
    Hacer un programa en C 
    que pida un arreglo de 5 elementos
    entonces, nos dice si alguno de los 5 
    elementos es la suma de los otros 4.

    Ejemplo: 
    12, 20, 45 , 8, 5 = 90 

    if( 45 == 90 - 45 ) verdad


    Salida: 45 es la suma de los otros 4
*/

#include<stdio.h>

int main(){

    int numeros[5];
    int i, suma=0;
    int fueEncontrado=0; // Es falso que el número ha sido encontro

    // Código para llenar el arreglo
    // y sumar todos los elementos:
    for(i=0;i<5;i++){
        printf("\n\t num[%d] = ",i);
        scanf("%d",&numeros[i]);
        suma+=numeros[i];
    }

    // Algoritmo para encontrar si un número
    // del arreglo es la suma de los otros 4:
    for(i=0;i<5;i++){
        if(numeros[i]==suma-numeros[i]){
            printf("\n\t %d es la suma de los otros 4... ",numeros[i]);
            fueEncontrado=1; // Se cambia a verdadero si el número fué encontrado
            break; // Rompe el ciclo for una vez que ya encontramos el número
        }
    }

    if(!fueEncontrado){ // fueEncontrado=='F' es lo mismo que !fueEncontrado
        printf("\n\t Ninguno de los numeros es la suma de los otros 4...");
    }


    printf("\n\n");
    return 0;
}

/*
    Tarea:
    Hacer un programa que pida 10 números 
    entonces, haga la suma de todos los que son 
    pares, de todos los que son impares y 
    cuente cuantos pares e impares salieron.

    Ejemplo:

    Entrada:
    11, 20, 7, 10, 5

    Proceso:
    Aquí te rifas

    Salidas:
    Número de pares: 2
    Número de impares: 3
    Suma de los pares: 30
    Suma de los impares: 23

*/