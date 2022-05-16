/*
    Primer reto:

    - Ingresar valores a un arreglo con un tamaño de 5.
    - Multiplicar todos sus valores.
    - Imprimir el resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5], rta, s, a;

    printf("Agreguemos unos valores a nuetro arreglo \n");

    for(int i = 0; i < 5; i++){
        printf("Valor[%i]: ", i+1);
        scanf("%i", &array[i]);
    }

   rta = array[0] * array[1] * array[2] * array[3] * array[4];

    printf("El resultado es: %i\n", rta);
}