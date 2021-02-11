#include <stdio.h>

int main()
{
    printf("Apuntadores! \n");
    float val;
    float *apVal;
    apVal = &val;
    *apVal = 3.1416;
    printf("El valor de la varible variable var es: %f \n", val);
    return 0;
}
