#include<stdio.h>

int main(){

    char letra;

    printf("\n\t Alfabeto: ");
    for(letra='a';letra<='z';letra++){
        printf(" %c",letra);
    }

    // Arreglo con 4 elementos tipo char...
    char palabra[] = {'H','o','l','a'};

    int i;
    printf("\n\t Mensaje: ");
    for(i=0;i<4;i++){
        printf(" %c",palabra[i]);
    }

    printf("\n\t Mensaje cifrado: ");
    for(i=0;i<4;i++){
        printf(" %c",palabra[i]+5);
    }

    printf("\n\n");
    return 0;
    
}