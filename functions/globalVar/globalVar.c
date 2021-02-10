#include <stdio.h>

char publicText[] = {"Texto en una variable global"};

void check()
{
    printf("Imprimir desde la función: check\n");
    printf("Variable global:\n");
    printf("%s\n", publicText);
    printf("Variable local: \n");
    // printf("%s\n", privateText);
}

int main()
{
    printf("Variables globales!\n");
    char privateText[] = {"Texto en una variable local.\n"};
    printf("Variable global:\n");
    printf("%s\n", publicText);
    printf("Variable local: \n");
    printf("%s\n", privateText);
    check();
    return 0;
}
