/*
    Primer reto
    - Ingresa los valores necesarios para calcular el área de un cilindro (radio, altura, área y volumen) con scanf
    - Realiza la operación.
    - Imprime el resultado del área.
*/

/*
    A = 2 * PI * r * (r + h)
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main(){
    double radio, altura, area, volumen;

     printf("Vamos a calcular el volumen de un cilindro! \n\n");

     printf("Ingresa el radio de la base: ");
     scanf("%lf", &radio);

     printf("Ingresa la altura del cilindro: ");
     scanf("%lf", &altura);

    area = 2 * PI * radio * (radio+altura);

    volumen = (PI * altura) * (radio*radio);

    printf("\n\nEl area de la base es: %lf\n", area);
    printf("El volumen del cilindro es: %lf\n\n", volumen);
}