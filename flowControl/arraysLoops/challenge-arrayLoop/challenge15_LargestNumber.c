#include <stdio.h>

int main()
{
    int size;
    int largest = 0;
    printf("Challenge 15: Arrays Loops - Largest number  \n");
    printf("Encontrar el múmero más grande de un arreglo.  \n");
    printf("Selecciona el tamaño de tu array \n");
    scanf("%i", &size);
    int list[size];
    printf("Elige cada uno de los valores para tu array");
        for (int i = 0; i < size; i++)
        {
            printf("\n Valor[%i]:", i);
            scanf("%i", &list[i]);
            if(largest == 0)
                largest = list[i];
            else if (largest < list[i])
                largest = list[i];

        }
    printf("\n El número mayor es: %i", largest);
    return 0;
}

