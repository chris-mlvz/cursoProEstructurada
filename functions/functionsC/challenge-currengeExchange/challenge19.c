#include <stdio.h>

float exchangeToPesos(float money)
{
    return money * 20.03;
}

float exchangeToDolar(float money)
{
    return money * 0.050;
}

int main()
{
    char select;
    float result;
    float currency;
    printf("Vamos a convertir cantidades de dinero\n");
    printf("Si quieres convertir de dolares a pesos presioana P\n");
    printf("Si quieres convertir de pesos a dolares presioana D\n");
    scanf("%c", &select);
    printf("Escribe la cantidad de dinero que quieres cambiar:");
    scanf("%f", &currency);
    switch (select)
    {
    case 'P':
        result = exchangeToPesos(currency);
        break;
    case 'D':
        result = exchangeToDolar(currency);
    default:
        printf("Selecciona P o D\n");
        break;
    }
    if(select == 'P' || select == 'D')
        printf("El resultado es: %f", result);
    return 0;
}
