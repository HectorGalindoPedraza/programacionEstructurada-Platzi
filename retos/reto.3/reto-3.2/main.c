/*
    Segundo Reto: 
    - Ingresa un numero entero.
    - Usando operadores de asignación realiza la operación de módulo del valor ingresado con 5
    - Imprime el resultado más uno usando operadores de incremento.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numX;
    int mod;
    printf("Ingrese un numero: ");
    scanf("%i", &numX);

    mod = numX % 5;
    mod++;
    printf("\n\nResultado: %i\n\n", mod);
}