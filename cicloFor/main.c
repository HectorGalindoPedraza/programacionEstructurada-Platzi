#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores For \n");
    int upperLim, bottomLim;

    printf("Imprimir en order descendiente \n");
    
    printf("Ingresar limite superior: ");
    scanf("%i", &upperLim);

    printf("\nIngresar limite inferior: ");
    scanf("%i", &bottomLim);

    for(int i = upperLim; i >= bottomLim; i--){
        printf("\nNumero: %i \n", i);
    }
}