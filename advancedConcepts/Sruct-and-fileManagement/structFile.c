#include <stdio.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};

int main(int argc, char const *argv[])
{
    printf("Estructuras de Datos!\n");
    struct personalData person;
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
    return 0;
}
