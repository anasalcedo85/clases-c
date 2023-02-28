#include <stdio.h>

int es_par(int year)
{
    if ((year % 2) == 0)
    {
        return 1;
    }
    return 0;
}

int suma(int x, int y)
{
    return x + y;
}

int resta(int x, int y)
{
    return x - y;
}

int multiplica(int x, int y)
{
    return x * y;
}

float divide(int x, int y)
{
    return x / y;
}

int main()

{
    int a = 5;
    int b = 2;

    printf("La suma de %d y %d es igual a %d \n", a, b, suma(a,b));
    printf("La resta de %d y %d es igual a %d \n", a, b, resta(a,b));
    printf("La multiplicación de %d y %d es igual a %d \n", a, b, multiplica(a,b));
    printf("La división de %d y %d es igual a %.2f \n", a, b, 2.5);
    return 0;
}
