#include<stdio.h>

int main(){

    // Minúscula:
    char letra='l';

    // Aritmética de caracteres:
    printf("\n\t La letra %c en mayuscula es: %c",letra,(letra-32));
    
    // Versión de la letras en decimal
    printf("\n\t La letra %d en mayuscula es: %d",letra,(letra-32));

    // Versión de las letras en hexadecimal
    printf("\n\t La letra %x en mayuscula es: %x",letra,(letra-32));

    // Versión de las letra en octal
    printf("\n\t La letra %o en mayuscula es: %o",letra,(letra-32));

    printf("\n");
    return 0;
}

// Hola -> ndiu -> Hola