/*
    Primer reto: 

    Haremos un programa que adivine número de la comuputadora 

    - Definir una variable cuyo valor es 5.
    - En otra variable ingresar un número con la instrucción, entre 1 y el 10.
    - Si el número ingresado es igual a la variable definida (5).
    Imprimir"Adivinaste". Si no
    imprimir"Ese no es, perdiste!"
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
int machine = 5, player;

printf("Ingresa el numero entre 1 y 10 que estoy pensando: ");
scanf("%i", &player);

if(player == machine)
    printf("\nAdivinaste");
else
    printf("\nEse no es, perdiste!\n");
}
