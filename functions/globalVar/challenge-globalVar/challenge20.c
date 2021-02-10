#include <stdio.h>
#include <string.h>

char name[15];
int score;

void checkScore()
{
    if (score >= 70)
        printf("El alumno %s ha sido aprobado con %i de calificación", name, score);
    else if (score < 70)
        printf("El alumno %s ha sido reprobado con %i de calificación", name, score);
}

int main()
{
    printf("Calificación\n");
    printf("Ingresa el nombre: ");
    scanf("%s", name); //No agregar &
    printf("Ingresa la calificación: ");
    scanf("%i", &score);
    checkScore();
    return 0;
}
