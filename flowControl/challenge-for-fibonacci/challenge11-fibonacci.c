#include <stdio.h>

int main()
{
    printf("Secuencia Fibonacci\n");
    int first = 0;
    int second = 1;
    int suma = 0;
    int limit;
    printf("Selecciona la posición limite\n");
    scanf("%i", &limit);
    for (int i = 1; i <= limit; i++)
    {
        printf("La posición %i de fibonacci es: %i \n", i, suma);
        suma = first + second;
        second = first;
        first = suma;
    }
    return 0;
}
