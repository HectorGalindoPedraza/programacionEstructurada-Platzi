/*
    Primer reto:

    - Vamos a calcular la potencia de un número.
    - Ingresar un valor base.
    - Ingresar un valor de exponente.
    - Dentro de una función calcular el exponente del número base.
    - Imprime el resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int pot(int base, int exponente){
    int arr[exponente];
    int res;
    for(int i = 0; i < exponente; i++){
        arr[i] = base;
        res *= arr[i];
    }
    return res;
}

int main(){
    printf("Potencia de un numero\n\n");
    int b, e;

    printf("Base: ");
    scanf("%i", &b);
    printf("\nExponente: ");
    scanf("%i", &e);
    int potencia = pot(b, e);
    printf("\nEl resultado es: %i", potencia);
}