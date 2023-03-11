#include <stdio.h>

int main()
{

    for (int num1 = 1; num1 <= 50; num1 = num1 + 1)
    {
        for (int num2 = 1; num2 <= 50; num2 = num2 + 1)
        {
            for (int num3 = 1; num3 <= 50; num3 = num3 + 1)
            {
                if ((num1 * num1) + (num2 * num2) == (num3 * num3) && num1 <= num2 && num2 <= num3)
                {
                    printf("%d, %d, %d\n", num1, num2, num3);
                }
            }
        }
    }
    return 0;
}
