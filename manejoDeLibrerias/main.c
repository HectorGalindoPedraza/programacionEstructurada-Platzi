#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias!\n");

    float firstValue = 10;
    float secondValue = 15;
    float result;
    int option;

    printf("Soy una calculadora!\n");
    printf("Que operación deseas realizar? \n");
    printf("1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division\n");
    printf("Elige una opcion: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:result = addition(firstValue, secondValue);  break;
    case 2:result = substraction(firstValue, secondValue ); break;
    case 3:result = multiplication(firstValue, secondValue); break;
    case 4:result = division(firstValue, secondValue); break;
    }

    printf("El resultado de la operacion es: %f", result);
}