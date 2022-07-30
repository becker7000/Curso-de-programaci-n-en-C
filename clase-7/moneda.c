#include<stdio.h> 
#include<stdlib.h> // standard library la usamos para la función rand()
#include<time.h> // time.h la usamos para la función time()
/**
 * Este tipo de comentario sirve para documentar...
 * Este programa simula el comportamiento de un volado 
 * con una moneda mexicana
 * */
int main(){

    srand(time(NULL));

    // Buscamos que la variable moneda tenga los valores 0 o 1...
    int moneda;

    //La funcion rand nos genera numero entre 0 y 65000 aprox...
    moneda=rand()%2; //Aseguramos los valores 0 o 1...

    if(moneda==0){
        printf("\n\t Moneda: SOOOOOOL!");
        
    }else{
        printf("\n\t Moneda: AGUILAAAA!");
    }
    
    printf("\n\n");
    system("PAUSE"); // Hace una pausa al programa..
    system("cls"); // Limpia la pantalla (clear scream)
    return 0;
}

/*
    El algoritmo que genera los número aleatorios
    con la función rand() tiene una semilla: 

    Por ejemplo: semilla=6
    aleatorio= (semilla*6+7-3*8+9)*3/2

    Provocamos que la función rand() tenga una semilla
    diferente con cada ejecución ayudandonos de la función time
    srand(time(NULL));

    rand()
*/