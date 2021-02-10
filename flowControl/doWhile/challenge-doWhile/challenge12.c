#include <stdio.h>

int main()
{
    printf("100 número naturales con Do While \n");
    int count = 0;
    do
    {
        printf("Número: %i \n", count);
        count++;
    } while (count <= 100);
    printf("Se imprimeron todos los números");
    return 0;
}
