#include<stdio.h>
#define path "Hola.txt"

int main(){

    /*
        FILE es un apuntador de tipo archivo...
        un apuntador es una variable que guarda
        la dirección en memoria de una variable...
    */

    FILE* archivo; //Así se declara un apuntador
    
    // fopen -> file open (abre un archivo)
    // recibe la direccion y el módo de apertura
    // Modos de apertura de un archivo:
    // r -> read (sólo lectura)
    // w -> write (sólo escritura)
    // wt -> escritura y lectura

    
    archivo = fopen(path,"r");

    // NULL es un valor constante que puede tomar un 
    // apuntador cuando no apunta a nada...
    if(archivo==NULL){
        printf("\n\t El archivo no fue encontrado...");
    }else{

        // Si sí existe:
        printf("\n\t Archivo disponible, listo para usarlo...");
        Sleep(3000);
        char arreglo[]={'L','e','y','e','n','d','o','.','.','.'};
        int i;
        printf("\n\t ");
        for(i=0;i<10;i++){
            printf("%c",arreglo[i]);
            Sleep(1200);
        }

        char letra;
        int cantidadLetras=0;

        printf("\n\n\t Archivo: \n\n\t");

        // EOF es un constante: end of file
        while(letra!=EOF){
            letra = fgetc(archivo);
            printf("%c",letra);
            cantidadLetras++;
        }

        printf("\n\n\t Cantidad de letras: %d",cantidadLetras);

    }

    // Cerramos el archivo:
    fclose(archivo);

    printf("\n\n");
    return 0;
}