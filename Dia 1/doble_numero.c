#include <stdio.h>

int mayor(int numero1, int numero2)
{
    if (numero1 > numero2)
        return numero1;
    else
        return numero2;
}

int pedirnumero()
{
    int n1;
    printf("dame un número: ");
    scanf("%d", &n1);
    return n1;
}

int main()
{
    int numero1 = pedirnumero();
    int numero2 = pedirnumero();

    printf("El mayor es %d\n", mayor(numero1, numero2) );

    return 0;
}
