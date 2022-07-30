#include<stdio.h>

int main(){

    // Crear un filtro para número del 1 al 5...

    int opcion;

    do{ // Primero actua
        system("cls");
        printf("\n\t +-----------------------------------+");
        printf("\n\t | Selecciona una opcion del menu:   |");
        printf("\n\t | 1) Dolares a Pesos                |");
        printf("\n\t | 2) Pesos a dolares                |");
        printf("\n\t | 3) Euros a pesos                  |");
        printf("\n\t | 4) Pesos a euros                  |");
        printf("\n\t | 5) Salir                          |");
        printf("\n\t +-----------------------------------+");
        printf("\n\t + Opcion => ");
        scanf("%d",&opcion);
    } while ( opcion<1 || opcion>5 ); // Luego piensa
    // Tarea: Crear un switch que ejecute las funciones del menú...

    printf("\n\t La opcion esta en el menu... ");

    printf("\n\n");
    return 0;
}

/*
    Este ciclo ejecutara el bloque de código al menos una vez
    antes de verificar si su condición es verdadera o no,
    luego se iterará dependiendo si se cumple la condición 
    o no...
*/

// TAREA: Crear otro programa que tenga un filtro para los siguientes valores
// 1,2,3,7,8,9 -> pista: usar operadores logicos...