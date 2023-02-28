#include <stdio.h>

int menor(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Escibe tres números: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("El menor es: %d\n", menor(a,menor(b,c)));

    return 0;
}