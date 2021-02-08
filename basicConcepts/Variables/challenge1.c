#include <stdio.h>

int main()
{
    int firstVariable;
    int secondVariable;
    int auxVariable;

    printf("Da el valor de x: ");
    scanf("%i", &firstVariable);
    printf("Da el valor de y: ");
    scanf("%i", &secondVariable);

    auxVariable = secondVariable;
    printf("El valor intercambiado del entero x es: %i\n", auxVariable);

    auxVariable = firstVariable;
    printf("El valor intercambiado del entero y es: %i\n", auxVariable);

    return 0;
}
