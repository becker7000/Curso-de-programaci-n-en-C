#include<stdio.h>

// Crear un programa que pida dos números enteros
// y diga cual de ellos es mayor o si ambos son iguales.
int main(){

    int x,y;
    printf("\n\t Escribe dos numeros enteros...");
    printf("\n\t Separados por un espacio: ");
    scanf("%d %d",&x,&y); // Así guardamos los valores de dos variables...

    //Los eventos de los if's son mutuamente excluyentes...
    if(x<y){
        printf("\n\t El mayor es: %d",y);
    }

    if(x>y){
        printf("\n\t El mayor es: %d",x);
    }

    if(x==y){
        printf("\n\t Los numeros son iguales");
    }

    printf("\n\n");
    return 0;
}