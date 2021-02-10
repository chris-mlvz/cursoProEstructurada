#include <stdio.h>

int exponentiation(int valBase, int valExp)
{
    int result = 1;
    for (int i = 0; i < valExp ; i++)
    {
        result *= valBase;
    }
    return result;
}

int main()
{
    int base;
    int exp;
    printf("Potencia de un número\n");
    printf("Base: ");
    scanf("%i", &base);
    printf("Exponente: ");
    scanf("%i", &exp);
    int expRes = exponentiation(base, exp);
    printf("El resultado es: %i \n", expRes);
    return 0;
}
