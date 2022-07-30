#include<stdio.h>

/*  Crear un programa que pida un número entero
    e imprima: "dentro del rango" si el número es 2,3,4 o 5
    en caso contrario que imprimia "fuera del rango" */

int main(){

    int numero;
    printf("\n\t Dame un numero entero: ");
    scanf("%d",&numero);

    // 2,3,4 o 5 sí es válido
    // Condición: si el número es mayor o igual a 2
    // y al mismo tiempo el número es menor o igual a 5...
    if(numero>=2 && numero<=5){
        printf("\n\t Dentro del rango...");
    }else{
        printf("\n\t Fuera del rango...");
    }

    printf("\n\n");
    return 0;
}