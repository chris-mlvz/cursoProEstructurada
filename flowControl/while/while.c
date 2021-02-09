#include <stdio.h>

int main()
{
    printf("Iterador while \n");
    int limit;
    scanf("%i", &limit);
    int i = 1;
    while(i <= limit)
    {
        printf("Número: %i \n", i);
        i++;
    }
    return 0;
}
