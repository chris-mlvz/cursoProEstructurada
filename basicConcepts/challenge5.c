#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    printf("Ingresa el valor:");
    scanf("%i", &value);
    value = value % 5;
    value++;
    printf("x: %i", value);
    return 0;
}
