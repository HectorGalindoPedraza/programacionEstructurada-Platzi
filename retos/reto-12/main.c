/*
    Primer Reto: 
    
    - Escribit un programa que nos diga el número más grande de un arreglo. Utilizando arreglos e iteradores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int length, array[length], i;
    int max = 0;
    printf("Encontrar el numero mas grande de un arreglo.\n\n");

    printf("Tamaño del arreglo: ");
    scanf("%i", &length);

    printf("\nIngresa los valores: \n");

    for( i = 0; i < length; i++){
        printf("Valor[%i]: ", i);
        scanf("%i", &array[i]);

        if(array[i] >  max)
            max = array[i];

        if(max == 0)
            max = array[i];
    }

    printf("\nEl número más grande es: %i\n", max);
}