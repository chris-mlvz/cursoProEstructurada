#include <stdio.h>

int main()
{
    printf("Condicional switch \n");
    int option;
    scanf("%i", &option);
    switch (option)
    {
    case 1:
        printf("Elegiste el número 1 \n");
        break;
    case 2:
        printf("Elegiste el número 2 \n");
        break;
    case 3:
        printf("Elegiste el número 3 \n");
        break;
    default:
        printf("Elegiste una opción invalida \n");
        break;
    }
    return 0;
}
