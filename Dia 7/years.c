#include <stdio.h>

int es_bisiesto(int year)
{
    if ((year % 4) == 0)
    {
        return 1;
    }

    return 0;
}

int es_par(int year)
{
    if((year % 2) == 0)
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


int divide(int x, int y)
{
    return x / y;
}



int main()

{

    int year = 1985;

    while (year <= 2023)
    {
        if (es_par(year))
        {
            printf("%d\n", year);
        }

        year = year + 1;
    }

    return 0;
}
