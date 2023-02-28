#include <stdio.h>
int main()
{
    int i = 0;
    int acumulada = 0;
    int numeros[] = {8, 3, 9, 4, 1, 6};
    int max = numeros[0];
    int min = numeros[0];

    while (i < 6)
    {
        if (numeros[i] > max)
        {
            max = numeros[i];
        }
        if (numeros[i] < min)
        {
            min = numeros[i];
        }

        i = i + 1;
    }
    printf("%d \n", max);
    printf("%d \n", min);

    return 0;
}
