/*
    Segundo reto:

    - Hacer un programa que reciba la calificación de un alumno.
    - Si el alumno sacó menos de 60, imprimir que el alumno está reprobado.
    - Si el alumno sacó más de 60, imprimir que el alumno está aprobado.

    Extra: Si el alumno sacó mas de 90, imprimit que está aprobado y una carita feliz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;

    printf("Para saber si aprobo o no ingresa tu calificacion: ");
    scanf("%f", &nota);

    if(nota < 60)
        printf("\n\nEl alumno reprobo");
    else if(nota >= 60 && nota < 90)
        printf("\n\nEl alumno aprobo");
    else
        printf("\n\nFelicidades! aprobaste con una nota superior :)");
}