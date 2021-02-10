#include <stdio.h>

int main()
{
    int score;
    printf("Para saber si aprobó o no ingresa tu calificación \n");
    scanf("%i", &score);
    if (score > 90)
        printf("Excelente trabajo aprobaste! :) \n");
    else if (score > 60)
        printf("El alumno esta aprobado \n");
    else if (score < 60)
        printf("El alumno esta reprobado \n");
    return 0;
}
