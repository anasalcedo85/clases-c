#include <stdio.h>

int main()

{
    int numero = 1;
    int x;

    printf("Escribe un número: ");
    scanf("%d", &x);

    while (numero <= x)
    {
        printf("%d \n", numero);
        numero = numero + 1;
    }

    return 0;
}