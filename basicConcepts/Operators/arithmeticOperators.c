#include <stdio.h>

int main()
{
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7 + 3;
    rRes = 7.1 - 3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7 * 3;
    rMod = 7 % 3;

    printf("Resultado de la suma: %i \n", rSum);
    printf("Resultado de la resta: %f \n", rRes);
    printf("Resultado de la división: %f \n", rDiv);
    printf("Resultado de la multipliación: %f \n", rMult);
    printf("Resultado del módulo: %i \n", rMod);

    return 0;
}
