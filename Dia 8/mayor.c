#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    if (n1 > n2)
    {
        printf("%d\n", n1);
    }
    else
    {
        printf("%d\n", n2);
    }

    return 0;
}