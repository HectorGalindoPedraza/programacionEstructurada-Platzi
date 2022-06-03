/*
    Primer reto:
    - Haz un programa que reciba una cadena de caracteres e imprima
      de regreso la misma cadena de forma invertida.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char string[50];
    int size;

    printf("String al reves <==\n\n");

    printf("ingrese su string: ");
    gets(string);

    size = strlen(string);
    
    printf("El string al revés es: ");
    
    for(int i = size; i >= 0; i--){
        printf("%c", string[i]);
    }
}

