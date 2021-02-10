#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Array Bidimensional - Suma de filas\n");

    int biArray[3][4] = {{1, 1, 1, 3}, {2, 2, 2, 4}, {10, 10, 3, 3}};
    int sumFirstRow = 0;
    int sumSecondRow = 0;
    int sumThirdRow = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0)
                sumFirstRow += biArray[i][j];
            else if (i == 1)
            {
                sumSecondRow += biArray[i][j];
            }
            else if (i == 2)
                sumThirdRow += biArray[i][j];
        }
    }
    printf("Suma de la primera fila: %i\n", sumFirstRow);
    printf("Suma de la segunda fila: %i\n", sumSecondRow);
    printf("Suma de la tercera fila: %i\n", sumThirdRow);

    return 0;
}
