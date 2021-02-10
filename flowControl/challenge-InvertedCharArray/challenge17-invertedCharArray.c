#include <stdio.h>
#include <string.h>

int main()
{
    printf("Invertir la frase.\n");
    char input[15];
    char output[15];
    int size;
    printf("Ingresa una frase: ");
    fgets(input, 15, stdin);
    size = strlen(input);
    printf("Tu frase invertida con printf es: ");
    for (int i = 1; i <= size; i++)
    {
        output[i] = input[size - i];
        printf("%c",output[i]);
    }
    printf("\nTu frase invertida con puts es: ");
    puts(output);
    return 0;
}
