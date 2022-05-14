#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int integerA;
   float floatA;
   char letterA;
  
   printf("Ingresa el valor del entero A: ");
   scanf("%i", &integerA);
  
   printf("Ingresa el valor del flotante A: ");
   scanf(" %f", &floatA);
  
   printf("Ingresa el valor del caracter A: ");
   scanf(" %c", &letterA);
  
   printf("El entero A es: %i \n", integerA);
   printf("El flotante A es: %f \n", floatA);
   printf("El caracter A es: %c \n", letterA);
  
   return 0;
}

  // printf("El valor de nuestro entero A es: %i,\n  El valor de mi flotante A es: %f,\n El valor de mi double A es: %f,\n El valor de mi caracter A es: %c, \n", integerA, floatA, doubleA, letterA);

  // En la siguiente linea estamos imprimiendo mi variable integerA
  // printf("El valor de nuestro entero A es: %i \n \n", integerA);

  // printf("El valor de mi flotante A es: %f \n \n", floatA);

  // printf("El valor de mi double A es: %f \n \n", doubleA);
  
  // printf("El valor de mi caracter A es: %c \n \n", letterA);