#include<stdio.h>

int main(){
    
    int num;
    printf("\n\t Dame un numero: ");
    scanf("%d",&num);

    printf("\n\t El numero es: %s",((num%2==0)? "par": "impar"));
    
    return 0;
}