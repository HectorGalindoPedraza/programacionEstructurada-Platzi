/*
    Primer reto:

    - Imprime la instrucción ingresa el primer número
    - Ingresa el número en una variable. 
    - Si el primer número es menor que el segundo, imprime el primer número.
    - Si no, imprime el segundo número.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Si me das numeros enteros, te dare el menor entre ellos!\n\n");
    int num1;
    int num2;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("\n\nIngrese el segundo numero: ");
    scanf("%i", &num2);

    if(num1 < num2)
        printf("El número menor es: %i\n\n", num1);
    else 
        printf("El número menor es: %i\n\n", num2);
}