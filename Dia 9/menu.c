#include <stdio.h>
#include <stdlib.h>

void continuar()
{
    printf("\nPulsa una tecla");
    getchar();
}

void par()
{
    int npar;

    printf("Escribe un numero: ");
    scanf("%d", &npar);
    getchar();

    if ((npar % 2) == 0)
        printf("par \n");
    else
        printf("impar \n");

    continuar();
}

void mayor()
{
    int edad;

    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    getchar();

    if (edad >= 18)
        printf("Mayor de edad \n");
    else
        printf("Menor de edad \n");

    continuar();
}

int main()
{
    char opcion = 'z';

    while (opcion != 'x')
    {
        system("clear");
        printf("Elige una opción: \n");
        printf("a) par \n");
        printf("b) mayor de edad \n");
        printf("x) salir \n");
        printf("\nEscribe una opción: ");
        scanf("%c", &opcion);
        getchar();
        system("clear");

        switch (opcion)
        {
        case 'a':
            par();
            break;

        case 'b':
            mayor();
            break;
        }
    }

    return 0;
}
