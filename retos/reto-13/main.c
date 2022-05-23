/*
    Primer reto:

    Crea un arreglo de 5 filas por 6 columnas en donde:

    - Los primeros 5 elementos  de cada fila tengan calificaciones entre 6 y 10.
    - El sexto elemento de cada fila debe ser 0.
    - Calcula el promedio de los primeros 5 elementos de cada fila y asignado al sexto elemento.
    - Imprime el promedio de cada fila de calificaciones.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float promedio[5][6];
    char subjects[5][15];

    // Introducimos las materias 

    printf("Ingrese las materias que va a promediar: \n");

    for(int sub = 0; sub <= 5; sub++){
        printf("Materia [%i]: ", sub);
        scanf("%c", &subjects[sub]);
    }

}