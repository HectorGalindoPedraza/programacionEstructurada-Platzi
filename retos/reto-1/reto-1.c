#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int varX; 
  int varY;
  int aux;

  printf("Da el valor de X: ");
  scanf("%i", &varX);

  printf("Da el valor de Y: ");
  scanf("%i", &varY);

  aux = varY;
  varY = varX;
  varX = aux;

  printf("\nEl valor intercambiado del entero X es: %i \n", varX);
  printf("El valor intercambiado del entero Y es: %i \n \n", varY);
}