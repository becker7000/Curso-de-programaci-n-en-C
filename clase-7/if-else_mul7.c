#include<stdio.h>

int main(){

    int numero;
    printf("\n\t Escribe un numero entero: ");
    scanf("%d",&numero);

    if(numero%7==0){
        printf("\n\t El numero es multiplo de 7...");
    }else{
        printf("\n\t El numero no es multiplo de 7...");
    }

    printf("\n\n");
    return 0;
} // Usamos if-else cuando solamente tenemos dos opciones a evaluar... 