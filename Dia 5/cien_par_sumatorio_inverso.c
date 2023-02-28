#include <stdio.h>
int main()
{

    int entero = 1;
    int numero = 0;
    int acumulado = 0;

    printf("Escribe un número: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        if ((numero % 2) == 0)
        {
            printf("%d\n", numero);
            acumulado = acumulado + numero;
        }
        numero = numero - 1;
    }
    printf("El total es: %d\n", acumulado);

    return 0;
}