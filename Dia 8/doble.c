#include <stdio.h>

void doble(int *x)
{
    *x = *x + *x;
}

int main()
{
    int c = 8;
    doble(&c);

    printf("%d\n", c);

    return 0;
}