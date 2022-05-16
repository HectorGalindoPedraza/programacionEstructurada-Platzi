#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("Iterador Do Whille \n");

    char answer = 'q';
    char value;

    do
    {
        printf("\nIngresa una letra: ");
        scanf("%c", &value);
    } while (value != answer);
    
    printf("Coinciden las letras %c == %c", value, answer);
}