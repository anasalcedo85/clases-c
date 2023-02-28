#include <stdio.h>

int es_mayor(int x)
{
    if (x >= 18)
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

    int edad = 0;

    printf("¿Cuántos años tienes? ");
    scanf("%d", &edad);

    if ((es_mayor(edad)))
    {
        printf("Eres mayor de edad \n");
    }
    else
    {
        printf("Eres menor de edad \n");
    }

    return 0;
}
