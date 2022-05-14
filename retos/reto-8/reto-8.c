/*
    Primer reto: 

    - Usando for, imprime la secuencia Fibonacci hasta la novena vuelta
    
    Sucesión Fibonacci

    0,1,1,2,3,5,8
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int antecesor = 0;
    int sucesor = 1;
    int new;

    for(int i = 0; i <= 9; i++){
        new = sucesor;
        sucesor += antecesor;
        printf("%i,", antecesor);
        antecesor = new;
        
    }
}