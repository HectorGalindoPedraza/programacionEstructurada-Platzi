/*
    Primer reto:

    - Vamos a hacer un pequeño juego de texto.
    - Imprimir una pequeña introducción, con tres opciones a elegir, numeradas del 1 al 3.
    - Cada una de ellas te debe de imprimir un resultado distinto
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Bienvenido, esta es una calculadora en terminal, estas son las operaciones que puedes realizar: \n\n");
    printf("+-------------------------------+\n");
    printf("|    Operacion    | # de opcion |\n");
    printf("| SUMA            |       1     |\n");
    printf("| RESTA           |       2     |\n");
    printf("| MULTIPLICACION  |       3     |\n");
    printf("| DIVISION        |       4     |\n");
    printf("| MODULO          |       5     |\n");
    printf("| PORCENTAJE      |       6     |\n");
    printf("+-------------------------------+\n");

    int option, equal, val1, val2;
    double op1, op2, res;

    printf("\nElige una operacion: ");
    scanf("%i", &option);

    switch(option)
    {
        case 1: 
            printf("Okey, entonces realizaremos una suma :)\n");
            printf("Ingrese el primer valor: ");
            scanf("%lf", &op1);
            printf("\nIngrese el segundo valor: ");
            scanf("%lf", &op2);
            res = op1 + op2;
            printf("El resultado de la suma es: %lf\n\n", res);
        break;

        case 2:
            printf("Okey, entonces realizaremos una resta :)\n");
            printf("Ingrese el primer valor: ");
            scanf("%lf", &op1);
            printf("\nIngrese el segundo valor: ");
            scanf("%lf", &op2);
            res = op1 - op2;
            printf("El resultado de la resta es: %lf\n\n", res);
        break;

        case 3: 
            printf("Okey, entonces realizaremos una multiplicacion :) \n");
            printf("Ingrese el primer valor: ");
            scanf("%lf", &op1);
            printf("\nIngrese el segundo valor: ");
            scanf("%lf", &op2);
            res = op1 * op2;
            printf("El resultado de la multiplicacion es: %lf\n\n", res);
        break;

        case 4:
            printf("Okey, entonces realizaremos una division :) \n");
            printf("Ingrese el primer valor: ");
            scanf("%lf", &op1);
            printf("\nIngrese el segundo valor: ");
            scanf("%lf", &op2);
            res = op1 / op2;
            printf("El resultado de la division es: %lf\n\n", res);
        break;

        case 5:
            printf("Okey, entonces hallaremos el modulo de una division :)\n");
            printf("Ingrese el dividendo: ");
            scanf("%i", &val1);
            printf("\nIngrese el divisor: ");
            scanf("%i", &val2);
            res = val1 % val2;
            printf("El resto (o residuo) de la division es: %f\n\n", res);
        break;

        case 6: 
            printf("Okey, entonces hallaremos el porcentaje de un numero :) \n");
            printf("Ingrese el numero al que hallara el porcentaje: ");
            scanf("%i", &val1);
            printf("\nIngrese el porcentaje que hallara: ");
            scanf("%i", &val2);
            equal = (val1/100) * val2;
            printf("El %i porciento de %i es: %i \n\n", val2, val1, equal);
    }
    
}