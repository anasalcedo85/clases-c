#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    int numero = 8;
    int acumulada = 0;

    for (int contador = 1; contador <= numero; contador = contador + 1)
    {
        acumulada = contador + acumulada;
    }
    printf("Sumatorio: %d\n", acumulada);
    return 0;
}