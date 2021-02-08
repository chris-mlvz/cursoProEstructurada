#include <stdio.h>


int main()
{
    float radio;
    float height;
    float volume;
    float area;
    float pi = 3.141592;
    printf("Vamos a calcular el volumen de un cilindro!\n");
    printf("Ingrese el radio de la base: %f\n", radio);
    scanf("%f", &radio);
    printf("Ingresa la altura del cilindro: %f\n", height);
    scanf("%f", &height);
    area = (pi * radio) * (pi * radio);
    volume = area * height;
    printf("El área de la base es: %f\n", area);
    printf("El volumen del cilindro es: %f\n", volume);
    return 0;
}
