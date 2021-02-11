#include <stdio.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};

int main(int argc, char const *argv[])
{
    printf("Archivos - Guardar en un archivo!!\n");
    struct personalData person;
    FILE *archivo;
    archivo = fopen("Datospersonales001.dat", "wb");
    if (archivo != NULL)
    {
        fflush(stdin);
        printf("Leer datos: \n");
        printf("Ingresar nombre: ");
        fgets(person.name, 20, stdin);
        printf("Ingresar apellido: ");
        fgets(person.lastName, 20, stdin);
        printf("Ingresar edad: ");
        scanf("%i", &person.age);
        printf("Imprimir datos: \n");
        printf("%s ", person.name);
        printf("%s ", person.lastName);
        printf("%i ", person.age);
        fwrite(&person, sizeof(person), 1, archivo);
        fclose(archivo);
    }
    else
    {
        printf("No se ha podido crear el archivo\n");
    }
    return 0;
}
