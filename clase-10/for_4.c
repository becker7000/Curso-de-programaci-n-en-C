#include<stdio.h>

int main(){

    int i; // Variable de control
    int factorial=1, natural; // Multiplicación...
    // La multiplicaciones se inicializan en 1.

    printf("\n\t Dame un numero natural: ");
    scanf("%d",&natural);

    // 5
    for(i=natural; i>1; i--){
        factorial*=i; // factorial = factorial * i ;
    }

    printf("\n\t %d ! = %d ",natural,factorial);

    printf("\n\n");
    return 0;
}

// 4! = 4*3*2*1 = 24

// cuenta del 1 al 15
// 1,2,3,4,5,6,7,8,9,10,9,8,7,6,5