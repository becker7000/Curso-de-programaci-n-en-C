#include<stdio.h>
#include<math.h> // Para que funcione bien pow()
#define path "C:\\Users\\Erick\\Documents\\Lenguaje C\\codes 2\\clase-11\\otro.txt"

// Creando un archivo en otro directorio...
int main(){

    FILE* archivo;

    archivo = fopen(path,"wt");

    int i;
    for(i=0;i<10;i++){
        fprintf(archivo,"\n\t 3^%d = %d",i,(int)pow(3,i));
    }

    fclose(archivo);
    printf("\n\n");
    return 0;
}