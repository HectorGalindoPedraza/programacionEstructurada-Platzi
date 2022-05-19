/*
    Primer reto:

    Crea un arreglo de 3 filas por 4 columnas en donde: 
    
    - Los elementos de la primera fila sumen un total de 4.
    - Los elementos de la segunda fila sumen un total de 10.
    - Los elementos de la tercer fila sumen un total de 26.
    - Imprime las sumatorias de cada fila.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Array Bidimensional - Suma de filas\n\n");

    int x, y, arreglo[3][4];

    printf("Ingresa 4 numeros que su suma entre si, el resultado sea 4\n\n");

    for(x = 0; x < 3; x++){
        int suma = 0;
        for (y = 0; y < 4; y++){
            printf("Ingresa el numero del espacio (%i,%i) en la matriz: ", x,y);
            scanf("%i", &arreglo[x][y]);
            suma += arreglo[x][y];
            }
            printf("Suma fila %i: %i \n", x +1, suma);
    }
}