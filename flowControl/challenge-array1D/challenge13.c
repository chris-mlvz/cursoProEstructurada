#include <stdio.h>

int main()
{
    int size;
    int sum;
    printf("Challenge 13: Arrays 1D \n");
    printf("Selecciona el tamaño de tu array \n");
    scanf("%i", &size);
    int list[size];
    printf("Elige cada uno de los valores para tu array");
        for (int i = 0; i < size; i++)
        {
            printf("\n Valor[%i]:", i);
            scanf("%i", &list[i]);
            sum += list[i];
        }
    printf("\n El resultado es: %i", sum);
    return 0;
}
