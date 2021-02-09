#include <stdio.h>

int main()
{
    printf("Condición if \n");
    float valA, valB, valC;
    valA = valB = 100;
    printf("Primera condición \n");
    if (valA == valB)
        printf("Ambos son iguales \n");
    printf("Segunda condición /n");
    if (valA == valB)
    {
        printf("Ambos son iguales \n");
        valC = valA + valB;
        printf("Además la suma de ambos número es: %f", valC);
    }

    return 0;
}
