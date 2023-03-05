#include <stdio.h>
#include <stdlib.h>

float peso()
{
    float pesokg = 0;

    printf("Escribe tu peso en kg: ");
    scanf("%f", &pesokg);
    getchar();

    return pesokg;
}

float altura()
{
    float alturacm = 0;

    printf("Escribe tu altura en m: ");
    scanf("%f", &alturacm);
    getchar();
    return alturacm;
}

int main()
{
    system("clear");
    float x = peso();
    float y = altura();
    float imc = x / (y * y);

    printf("Tu IMC es: %f\n", imc);

    if (imc <= 24)
        printf("Tienes que engordar \n");
    else if (imc == 25)
        printf("Estás en tu peso \n");
    else
        printf("Tienes que adelgazar \n");

    return 0;
}
