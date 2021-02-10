#include <stdio.h>

int main()
{
    int valA, valUser;
    valA = 5;
    printf("Adivina el número entre el 1 y el 10 que esto pensando!");
    scanf("%i",&valUser);
    if(valUser == valA)
    {
        printf("Adivinaste \n");
    }
    else 
    {
        printf("Ese no es perdiste");
    }
    return 0;
}
