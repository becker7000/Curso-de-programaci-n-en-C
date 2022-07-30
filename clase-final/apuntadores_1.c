#include<stdio.h>

// Un apuntador es una variable que guarda
// la dirección (referencia) de otra variable.

int main(){

    int n = 75; // Tiene una dirección 00000000f6ab04
    int* p = &n; // Guarda la dirección de n 
    // & -> dame tu dirección 

    // %p es código de formato para guardar una dirección:
    printf("\n\t n = %d direccion de n: %p",n,&n);

    printf("\n\t p = %p direccion de p: %p y valor apuntado: %d ",p,&p,*p);
    // * sirve para pedir el valor contenido en una dirección

    printf("\n\n");
    return 0;
}