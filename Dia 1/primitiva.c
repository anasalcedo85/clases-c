#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int contador = 0;
    int aleatorio;

    srand(time(NULL));

    while (contador < 7)
    {
        aleatorio = rand() % 49;

        if (aleatorio > 0)
        {
            printf("Número aleatorio: %d\n", aleatorio);
            contador = contador + 1;
        }
        else
        {
            printf("Ha salido 0 \n");
        }
    }

    return 0;
}