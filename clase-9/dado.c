#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    srand(time(NULL));

    // Buscamos que la variable tome uno de valores
    // siguientes 1,2,3,4,5,6:
    int dado=rand()%6+1; // 1,2,3,4,5,6
    // Con la línea anterios aseguramos numeros del 1 al 6.

    printf("\n\t Da click para lanzar el dado...\n");
    getch();

    switch(dado){

        case 1: 
            printf("\n\t  ---");
            printf("\n\t | * |");
            printf("\n\t  ---");
            break;
        case 2: 
            printf("\n\t DOS...");
            break;
        case 3: 
            printf("\n\t TRES...");
            break;
        case 4: 
            printf("\n\t CUATRO...");
            break;
        case 5: 
            printf("\n\t CINCO...");
            break;
        case 6: 
            printf("\n\t SEIS...");
            break;

    }

    printf("\n\n\t Da click para reiniciar el dado...");
    getch();
    system("cls");
    return main();
}