/*
    Primer reto:

    - Usando do while, imprime los primeros 100 numeros naturales.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int contador = 0;

    printf("Estos son los 100 primeros numeros naturales\n");

    do{
        printf("%i \n", contador);
        contador += 1;
    }while(contador <= 100);
}