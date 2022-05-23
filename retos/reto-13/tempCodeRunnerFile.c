
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