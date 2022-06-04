#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){
    int res = a + b; 
    return res;
}

int main(){
    printf("Funciones!\n");

    int additionRes = addition(3, 4);

    printf("Resultado es: %i", additionRes);


    return 0;
}