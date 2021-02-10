#include <stdio.h>

int main()
{
    printf("Te encuentras en un sueño y tienes tres caminos \n");
    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera \n");
    printf("Escribe 3 si quieres ir por el camino de gatitos \n");
    int option;
    scanf("%i", &option);
    switch (option)
    {
    case 1:
        printf("Disfrutas comiendo todos los dulces que puedes\n");
        printf("Pero te das cuenta que estan envenenados y mueres.\n");
        break;
    case 2:
        printf("Apareces en un bosque gigante\n");
        printf("Los arboles empiezan a caer y terminas aplastado.\n");
        break;
    case 3:
        printf("Los gatitos te llevan a una puera y al cruzarla despiertas! \n");
        printf("Felicidades \n");
        break;
    default:
        printf("Elegiste una opción invalida \n");
        break;
    }
    return 0;
}
