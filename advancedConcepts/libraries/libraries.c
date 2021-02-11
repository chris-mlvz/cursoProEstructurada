#include <stdio.h>
#include "operators.h"

int main()
{
    printf("Librerias! \n");

    float firstValue = 10;
    float secondValue = 15;
    float result;
    int option;

    printf("Soy una calculadora \n");
    printf("Que operación deseas realizar? \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicación \n");
    printf("4. División \n");
    printf("Elige una opción: \n");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        result = addition(firstValue, secondValue);
        break;
    case 2:
        result = substraction(firstValue, secondValue);
        break;
    case 3:
        result = multiplication(firstValue, secondValue);
        break;
    case 4:
        result = division(firstValue, secondValue);
        break;
    default:
        break;
    }

    printf("El resultado de la operación es: %f \n", result);
    
    return 0;
}
