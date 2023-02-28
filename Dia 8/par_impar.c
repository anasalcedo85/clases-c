#include <stdio.h>

int es_par(int x)
{
    if ((x % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero = 0;

    printf("Escribe un número: ");
    scanf("%d", &numero);

    if ((es_par(numero)))
    {
        printf("Es par \n");
    }
    else
    {
        printf("Es impar \n");
    }

    return 0;
}