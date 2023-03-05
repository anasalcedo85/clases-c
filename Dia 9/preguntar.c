#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);

    system("clear");

    for (int num = min; num <= max; num = num + 1)
    {
        if ((num % 2) == 0)
        {
            printf("%d \n", num);
        }
    }
    return 0;
}
