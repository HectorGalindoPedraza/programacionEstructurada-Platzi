/*
    Primer reto: 
    
    - Utilizando variables globales, ingresa el nombre de un alumno y su calificación.
    - En una función evalúa si el alumno ha sido aprobado o no.
    - La calificación mínima aprobatoria es 7.
    - Imprimir desde la función si el alumno aprobó.
*/

#include <stdio.h>
#include <stdlib.h>

char name[];
int score;

int main(){
    printf("Calificacion.\n\n");

    printf("Ingrese el nombre: ");
    gets(name);

    printf("Ingrese la calificación: ");
    scanf("%i", &score);

    if(score > 6)
        printf("El alumno %s ha sido aprobado.\n", name);
    else
        printf("El alumno %s ha reprobado.\n", name);

}