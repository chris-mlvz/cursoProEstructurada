#include <stdio.h>

int main()
{
    float fahrenheit;
    float celsius;

    printf("Hola! Vamos a transformar grados Fahrenheit a grados Celsius\n");
    printf("Ingrese la temperatura en grados Fahrenheit: %f", fahrenheit);
    scanf("%f", &fahrenheit);
    celsius = fahrenheit - 32 * (5 / 9);
    printf("La temperatura en grados Celsius es: %f", celsius);

    return 0;
}
