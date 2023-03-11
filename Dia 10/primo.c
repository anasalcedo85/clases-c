#include <stdio.h>

int es_par(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int es_primo(int b)
{
    for (int c = b - 1; c > 1; c = c - 1)
    {
        if (b % c == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    for (int x = 1; x <= 20; x = x + 1)
    {
        if (es_primo(x))
        {
            printf("%d \n", x);
        }
    }

    return 0;
}