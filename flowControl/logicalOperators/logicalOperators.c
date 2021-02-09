#include <stdio.h>

int main()
{
    printf("Operadores lógicos \n");
    float valA, valB, valC;
    valA = 5;
    valB = valC = 10;
    if(valA < valB && valB == valC)
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones \n");
    if(valA > valB || valA <= valC)
        printf("Se cumplieron por lo menos una de las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones \n");
    return 0;
}
