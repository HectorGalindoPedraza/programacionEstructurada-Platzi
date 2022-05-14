/*
    Segundo reto
    - Ingresa la temperatura en grados Fahrenheit.
    - Realiza la operación para convertir de grados Fahrenheit a Celcius.
    - Imprime el resultado de la conversión.
*/

/*
    (gradoF °F - gradoC) * 5/9
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    double gradoC, gradoF;

    printf("Hola! Vamos a transformar grados fahrenheit a Celcius \n\n");
    printf("Ingrese la temperatura en Fahrenheit: ");
    scanf("%lf", &gradoF);
    gradoC = (gradoF - 32) * 5/9;
    printf("\n\n%lf °F en Celsius es: %lf\n\n", gradoF, gradoC);
}