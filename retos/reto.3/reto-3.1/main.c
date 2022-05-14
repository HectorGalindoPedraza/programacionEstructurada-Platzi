/*
    Primer reto:
    - Crea una variable llamada x con valor 10
    - Utilizando operadores de asignación, que esta variable se sume a sí misma el doble de su valor.
    - Imprime el resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    printf("Le sumamos a la variable x el doble de su valor que en principio es 10 \n\n");

    x += x*2;
    printf("X es igual a: %i \n\n", x);
}