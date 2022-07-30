#include<stdio.h>

int main(){

    int opcion;

    printf("\n\t +-----------------------------------+");
    printf("\n\t | Selecciona una opcion del menu:   |");
    printf("\n\t | 1) Crear contacto                 |");
    printf("\n\t | 2) Modificar contacto             |");
    printf("\n\t | 3) Eliminar contacto contacto     |");
    printf("\n\t | 4) Salir                          |");
    printf("\n\t +-----------------------------------+");
    printf("\n\t + Opcion => ");
    scanf("%d",&opcion);

    // 1,2,3,4 <- si no aceptados (dejamos que el programa fluya)...
    // -2,-1,0,...,5,6,7,8,9 <- no se acepta (reiniciamos el menú)...
    // Con este if queremos cachar los datos no valido...
    if( opcion<1 || opcion>4){
        printf("\n\t La opcion no es valida...");
        printf("\n\t Por favor, vuelve a intentar...");
        system("pause"); // Ponemos una pausa para que de click...
        system("cls"); // Limpiamos la pantalla
        return main(); // Reinciamos el programa con esta sentencia...
    }

    switch(opcion){
    case 1: 
        printf("\n\t Creando contacto...");
        break;
    case 2:
        printf("\n\t Modificando contacto...");
        break;
    case 3:
        printf("\n\t Eliminando contacto...");
        break;    
    case 4:
        printf("\n\t Saliendo de la agenda...");
        Sleep(3000); // Se duerme el sistema 3 segundos...
        printf("\n\n");
        system("cls");
        exit(0); // Termina el programa...    
    default: // default es opcional ponerlo o no...
        printf("\n\t Opcion no validad...");
        // El break en el default no es necesario
    }

    printf("\n\n\t ");
    system("pause");
    system("cls");
    return 0;
}