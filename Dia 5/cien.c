#include <stdio.h>
int main()
{

    int entero = 1;

    printf("%d \n", entero);
    entero = entero + 1;

    while (entero <= 100)
    {
        printf("%d \n", entero);
        entero = entero + 1;
    }

    return 0;
}