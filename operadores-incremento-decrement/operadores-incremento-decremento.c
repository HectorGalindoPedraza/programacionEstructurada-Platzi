#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Operadores de incremento y decremento\n\n");

    int value, res;

    value = 25;
    res = value++;
    printf("Resultado: %i\n", res);
    printf("Resultado de value: %i\n", value);

    
    value = 25;
    res = ++value;
    printf("Resultado: %i\n", res);

    value = 25;
    res = value--;
    printf("Resultado: %i\n", res);
    printf("Resultado de value: %i\n", value);
    
    value = 25;
    res = --value;
    printf("Resultado: %i\n", res);
}