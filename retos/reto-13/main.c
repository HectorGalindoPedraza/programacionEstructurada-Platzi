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

    int promedio[4][5];
    int nota;
    char subjects[5][15];

    
    printf("Ingrese las materias que va a promediar: \n");
    
    for(int sub = 0; sub < 5; sub++){
        printf("Materia [%i]: ", sub+1);
        scanf("%s", &subjects[sub]);
    }

       
    for (int filas = 0; filas <= 4; filas++){
        int suma;

        for (int columnas = 0; columnas <= 5; columnas++){
               
           if(columnas != 5){
            printf("ingrese la nota [%i] de %s: ", columnas+1, subjects[filas]); 
            scanf("%i", &nota);
            suma += promedio[filas][columnas];
            printf("columna: %i, fila: %i\n",columnas, filas);

                if(nota <= 10 && nota >= 6){        
                promedio[filas][columnas] = nota;
                printf("La nota es: %i\n", promedio[filas][columnas]);
               
                }else{                             
                    while(nota < 6 || nota > 10){   
                        printf("Ingrese una nota entre 6 y 10: ");
                        scanf("%i", &nota);
                        promedio[filas][columnas] = nota;
                        suma += promedio[filas][columnas];
                        printf("La nota es: %i\n", promedio[filas][columnas]);
                    }
                }
           }else{
               suma /= 5;
               promedio[filas][columnas] = suma;
               printf("El promedio de la lista %i es: %i\n", filas, promedio[filas][columnas]);
           }
        }
    }
        
    return 0; 
    }

