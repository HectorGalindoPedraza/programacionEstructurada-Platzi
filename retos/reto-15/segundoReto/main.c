/*
    Segundo reto:

    - Hacer un programa que cambie de dólares a tu moneda y de tu moneda a dólares.
    - Usa funciones.
*/

#include <stdio.h>
#include <stdlib.h>

float usdCOP(float cop){
    float tasaDeCambio = 3784;
    float conversionFinal = cop * tasaDeCambio;
    return conversionFinal; 
}

float copUSD(float usd){
    float tasaDeCambio = 3784;
    float conversionFinal = (usd * 1) / tasaDeCambio;
    return conversionFinal; 
}

int main(){
    printf("Conversor de divisas (peso && dolar)\n\n");

    float acop;
    float ausd;
    int op;
    float conversion;

    printf("(1) Convertir Pesos a Dólares\n");
    printf("(2) Convertir Dólares a Pesos\n\n");

    printf("Escriba el numero de la opcion: ");
    scanf("%i", &op);

    if(op == 1){
        printf("Ingrese el monto a convertir: ");
        scanf("%f", &ausd);
        conversion = copUSD(ausd);
        printf("Un monto de:\n $%.2f Pesos Colombianos\n equivale a:\n $%.2f dólares (USD)\n\n", ausd, conversion);
    }else if(op == 2){
        printf("Ingrese el monto a convertir: ");
        scanf("%f", &acop);
        conversion = usdCOP(acop);
        printf("Un monto de:\n $%.2f dólares(USD)\n equivale a:\n $%.2f Pesos Colombianos (COP)\n\n", acop, conversion);
    }else{
        printf("Ingrese una opcion valida!\n");
        exit(-1);  
    }
    exit(-1); 
}
