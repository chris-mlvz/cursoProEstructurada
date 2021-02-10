#include <stdio.h>

int main()
{
    printf("Array Bidimensional - Promedio de calificaciones");
    
    
    float floatArray[5][6] = {{6, 6, 6, 6, 6, 0}, {7, 7, 7, 7, 7, 0}, {8, 8, 8, 8, 8, 0}, {9, 9, 9, 9, 9, 0}, {10, 10, 10, 10, 10, 0}};
    for (int i = 0; i < 5; i++)
    {
    float average = 0;
    float sum = 0;
        for (int j = 0; j < 6; j++)
        {
            if (j <= 4)
                sum += floatArray[i][j];
            if (j == 5)
            {
                floatArray[i][j] = sum;
                sum += floatArray[i][j];
            }
        printf("La sumatoria de floatArray[%i][%i] es: %f\n", i, j, sum);
        }
    average = sum / 5;
    printf("\n\n\t\t El promedio de la fila %i es: %f \n\n", i, average);
    }
    return 0;
}
