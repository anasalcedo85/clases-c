#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int aleatorio;

    srand(time(NULL));

    for (int contador = 0; contador < 7; contador = contador + 1)
    {
        aleatorio = rand() % 49;
        printf("Número aleatorio: %d\n", aleatorio + 1);
    }

    return 0;
}