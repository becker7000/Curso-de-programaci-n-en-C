#include<stdio.h>

/* 
    Crear un programa que haga la suma de Gauss
    A partir de un número determinado por el usuario
    n=10
    Suma: 1+2+3+4+5+6+7+8+9+10=55
    ((n+1)*n)/2 -> ((10+1)*10)/2 = (11*10)/2 = 110/2 = 55
*/

int main(){

    int suma=0; // La sumas se incializan en cero... 
    // suma va tomando los valores de las sumas parciales: 1, 1+2, 1+2+3, 1+2+3+4,...
    int contador=1; // Variable de control, va tomando los valores sucesivos: 1,2,3,4
    int natural;

    printf("\n\t Escribe un numero: ");
    scanf("%d",&natural);

    while(contador<=natural){ // Condición
        suma+=contador; 
        contador++; // Incremento
    }
    printf("\n\t Suma: %d",suma);

    printf("\n\n");
    return 0;
}

// Libro: Algorithm Design, Autor: Jon-Kleinberg
// Ventajas de las computadoras: 
// 1) Automática
// 2) Memoria de gran capacidad
// 3) Procesamiento veloz... 

