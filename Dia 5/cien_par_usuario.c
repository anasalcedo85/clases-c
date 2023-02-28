#include <stdio.h>
int main()
{

    int entero = 1;
    int numero = 0;
    int acumulado = 0; 

    printf("Escribe un número: ");
    scanf("%d", &numero);

    while (entero <= numero)
    {
        if ((entero % 2) == 0)
        {
            printf("%d \n", entero);
        }
        entero = entero + 1;
    }

printf ("Total números pares: %d\n", acumulado)
    return 0;
}