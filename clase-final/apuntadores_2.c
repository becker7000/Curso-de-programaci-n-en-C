#include<stdio.h>

int main(){

    float v1 = 689.2;
    float v2 = 345.12;
    float* pvx;

    // Este apuntador se inicialza de forma estática:
    pvx = &v1; 
    printf("\n\t Valor apuntado: %.3f",*pvx);

    // Redireccionamos:
    pvx = &v2;
    printf("\n\t Nuevo valor apuntado: %.3f",*pvx);

    printf("\n\n");
    return 0;
    
}