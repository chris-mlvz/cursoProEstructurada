#include <stdio.h>

int main()
{
    int valA, valB;
    printf("Si me das dos números enteros, te daré el menor entre ellos! \n");
    printf("Ingresa el primero número:");
    scanf("%i", &valA);
    printf("Ingresa el segundo número:");
    scanf("%i", &valB);
    if (valA < valB)
        printf("El número menor es: %i \n", valA);
    else if (valB < valA)
        printf("El número menor es: %i \n", valB);
    else if (valB == valA)
        printf("Los dos números son iguales: %i", valA);
    return 0;
}
