#include<stdio.h>

int main(){

    char letra;
    printf("\n\t Escribe un caracter: ");
    scanf("%c",&letra);

    switch (letra){
        
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("\n\t El simbolo es una vocal...");
            break;
        default:
            printf("\n\t El simbolo no es vocal...");
            
    }

    printf("\n\n");
    return 0;
}