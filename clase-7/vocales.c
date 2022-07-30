#include<stdio.h>

/**
 * Este programa pide un caracter del código ASCII
 * y entonces nos dice que vocal es: 1ra, 2da, 3ra,... 
 **/
int main(){

    char letra;
    printf("\n\t Escribe una letra: ");
    scanf("%c",&letra);

    // a,e,i,o,u,A,E,I,O,U <- el lenguaje C es case sensitive
    if(letra=='a' || letra=='A'){
        printf("\n\t Primera vocal...");
    }else if(letra=='e' || letra=='E'){
        printf("\n\t Segunda vocal...");
    }else if(letra=='i' || letra=='I'){
        printf("\n\t Tercera voca...");
    }else if(letra=='o' || letra=='O'){
        printf("\n\t Cuarta vocal...");
    }else if(letra=='u' || letra=='U'){
        printf("\n\t Quinta vocal...");
    }else{
        printf("\n\t El caracter no es ninguna vocal...");
    }


    printf("\n\n");
    return 0;
}