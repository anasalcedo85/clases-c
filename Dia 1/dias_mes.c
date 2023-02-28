#include <stdio.h>

int main()
{
    int mes;
    printf("Escribe un número: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Este mes tiene 30 días \n");
        break;
    case 2:
        printf("Este mes tiene 28 días \n");
        break;
    default:
        printf("Este mes tiene 31 días \n");
        break;
    }
    return 0;
}