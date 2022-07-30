#include<stdio.h>
// Paso por referencia:
// Funciones con apuntadores:
void intercambiar(int* a,int* b); 
// Nota: los nombres a y b, se pueden omitir (solo en el prototipo de la funcion)

int main(){

    int numero = 10;
    int* pointer_num = &numero;
    printf("\n\t Numero: %d",numero);

    *pointer_num = 11;
    printf("\n\t Numero: %d",numero);


    int a = 876000, b = 234765;
    printf("\n\t Antes del intercambio: a = %d, b = %d ",a,b);
    intercambiar(&a,&b); // Paso por referencia
    printf("\n\t Despues del intercambio: a = %d, b = %d ",a,b);

    printf("\n\n");
    return 0;
}

//Definición:
void intercambiar(int* a, int* b){
    int auxiliar= *a;
    *a=*b;
    *b=auxiliar;
} 