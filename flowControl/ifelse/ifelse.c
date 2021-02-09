#include <stdio.h>

int main()
{
    printf("Condición if, else, else if \n");
    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC = 150;
    if(valA == valB)
    {
        printf("No se va a cumplir esta condición \n");
    }
    else if(valB == valC)
    {
        printf("Tampoco se va a cumplir esta");
    }
    else 
    {
        printf("Ninguna condición se cumplió \n");
        printf("Despues de esta linea el programa va a terminar");
    }
    return 0;
}
