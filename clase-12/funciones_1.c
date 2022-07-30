#include<stdio.h>
#include<stdlib.h> // Para que funcione exit(0)

// Declaraciones o prototipos:
void suma_gauss();
void factorial();
void fibonacci();
int filtrar(int min, int max);

int main(){

    int opcion;

    system("cls"); // clear
    printf("\n\t +-----------------------------------+");
    printf("\n\t | Selecciona una opcion del menu:   |");
    printf("\n\t | 1) Suma Gauss                     |");
    printf("\n\t | 2) Calcular factorial             |");
    printf("\n\t | 3) Fibonacci                      |");
    printf("\n\t | 4) Salir                          |");
    printf("\n\t +-----------------------------------+");
    opcion=filtrar(1,4);
    
     // char o int
    switch (opcion) {
    case 1:
        suma_gauss(); // Llamada
        break;
    case 2:
        factorial(); // LLamada
        break;
    case 3:
        fibonacci(); // Llamada
        break;
    case 4: 
        printf("\n\t Fin del programa...");
        Sleep(2000);
        printf("\n\n");
        exit(0);
        break;
    }

    printf("\n\t Fin de la funcion...");
    printf("\n\t De click para continuar...");
    getch();
    return main();
}

// Definiciones:

void suma_gauss(){
    system("cls");
    // Variables locales de suma_gauss() 
    // solamente las puedes usar dentro del bloque de la función
    int suma=0;
    int contador=1;
    int limite;
    limite = filtrar(5,500);

    while(contador<=limite){
        suma+=contador;
        contador++;
    }

    printf("\n\t La suma desde 1 a %d es %d",limite,suma);

}

void factorial(){

    int n;
    int fact=1; // Las multiplicaciones inician en 1....
    n=filtrar(0,15);

    // Generamos el factorial:
    if(n==0 || n==1){
        fact=n; // 0! = 1 y 1! = 1
    }else{
        int i;
        for(i=n;i>1;i--){
            fact*=i;
        }    
    }
    // Imprimimos el factorial:
    printf("\n\t %d ! = %d",n,fact);

}

// 0, 1, 1, 2, 3, 5, 8, 13, 21,... 
void fibonacci(){

    int fib=0;
    int max;
    system("cls");
    max = filtrar(3,20);
    printf("\n\t Sucesion: 0, 1,");

    static int x=0,y=1;
    // static significa que la variable es inicilizada
    // una única vez

    int i=2;
    while(i<max){
        y=x+y;
        x=y-x;
        printf(" %d",y);
        if(i<(max-1)) printf(",");
        i++;
    }

    /*
        x = 0
        y = 1
        max = 5

        ------- i = 2
        y = x + y = 0 + 1 = 1
        x = y - x = 1 - 0 = 1
        ------- i = 3
        y = x + y = 1 + 1 = 2
        x = y - x = 2 - 1 = 1
        ------- i = 4
        y = x + y = 1 + 2 = 3
        x = y - x = 3 - 1 = 2
        ------- i = 5 termina
    
    
    */

}

int filtrar(int min, int max){
    int x;
    do{
        printf("\n\t Dame un numero entre %d y %d: ",min,max);
        scanf("%d",&x);
    }while(x<min || x>max);
    return x;
}

/*
    Replicar el programa pero ahora con las funciones del menú:
    con enteros...
    1) sumar
    2) restar
    3) multiplicar
    4) dividir
    5) salir

*/