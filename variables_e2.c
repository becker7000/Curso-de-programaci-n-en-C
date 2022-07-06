#include<stdio.h>

int main(){

    int segundos=705;
    int minutos=segundos/60; // Division entera
    printf("\n\t %d segundos son: ",segundos);

    segundos=segundos%60;
    printf(" %d minutos con %d segundos...",minutos,segundos);

    printf("\n");
    return 0;
}