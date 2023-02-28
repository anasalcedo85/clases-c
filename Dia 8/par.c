#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n1 = atoi(argv[1]);

    if ((n1 % 2) == 0)
    {
        printf("Si \n");
    }
    else
    {
        printf("No \n");
    }

    return 0;
}