#include <stdio.h>

int main()
{
    printf("Iteradores For \n");
    int upperLim, bottomLim;

    printf("Imprimir en orde descendiente \n");
    printf("Ingresar limite superior: \n");
    scanf("%i", &upperLim);
    printf("Ingresar limite inferior: \n");
    scanf("%i", &bottomLim);
    for(int i = upperLim; i >= bottomLim; i--)
    {
        printf("Número: %i \n", i);
    }
    return 0;
}
