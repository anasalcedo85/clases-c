#include <stdio.h>
int main()
{
    int numero = 0;
    int acumulado = 0;

    printf("Escribe un número: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        acumulado = acumulado + numero;
        printf("Escribe un número: ");
        scanf("%d", &numero);
    }

    printf("El total es: %d\n", acumulado);

    return 0;
}