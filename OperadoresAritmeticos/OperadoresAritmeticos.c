#include <stdio.h>
#include <stdlib.h>

int main(){
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7 + 2;
    rRes = 7.1 - 3.1;
    rDiv = 3.5 / 2.0;
    rMult = 7 * 3;
    rMod = 7 % 2;

    printf("Resultado de la suma: %i \n", rSum);
    printf("Resultado de la resta: %f \n", rRes);
    printf("Resultado de la division: %f \n", rDiv);
    printf("Resultado de la multiplicación: %f \n", rMult);
    printf("Resultado del modulo: %i \n", rMod);

    return 0;
}