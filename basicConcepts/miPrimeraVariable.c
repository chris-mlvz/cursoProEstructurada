#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // int integerA = 134;
    // float floatA = 1.1;
    // double doubleA = 1.2;
    // char letterA = 'A';
    // bool boolean = false;

    // En la siguiente línea estamos imprimiendo mi variable integerA
    // printf("El valor de nuestro entero A es: %i\n, El valor de mi flotante A es: %f\n, El valor de mi double A es: %f\n, El valor de mi caracter A es: %c\n", integerA, floatA, doubleA, letterA);
    // printf("El valor de mi flotante A es: %f \n", floatA);
    // printf("El valor de mi double A es: %f \n", doubleA);
    // printf("El valor de mi caracter A es: %c", letterA);

    int integerA;
    float floatA;
    char letterA;

    printf("Ingresa el valor del entero A: \n");
    scanf("%i", &integerA);
    printf("Ingresa el valor del flotante A: \n");
    scanf("%f", &floatA);
    printf("Ingresa el valor del caracter A: \n");
    scanf(" %c", &letterA);

    printf("El entero A es: %i\n", integerA);
    printf("El flotante A es: %f\n", floatA);
    printf("El caracter A es: %c\n", letterA);
    return 0;
}
