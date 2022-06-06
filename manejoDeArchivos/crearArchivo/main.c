#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Archivos! Crear un archivo\n");

    FILE *archivo;

    archivo = fopen("archivo001.c", "w");

    if(archivo != NULL ){
        printf("El archivo se ha creado exitosamente. Como prueba en la carpeta que ha sido creada\n");
        fclose(archivo);
    }else{
        printf("El archivo no se ha creado");
    }

    return 0;
}