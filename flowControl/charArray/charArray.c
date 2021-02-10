#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Cadena de caracteres\n");
    char nameC[30];
    int size;
    printf("Ingresa el nombre con gets: \n");
    fgets(nameC,30,stdin);
    printf("El nombre es: ");
    puts(nameC);
    size = strlen(nameC);
    printf("\n El tamaño de la cadena es: %i \n", size);
    return 0;
}
