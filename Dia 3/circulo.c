
#include <stdio.h>

int main()
{
    int radio;

    printf("Escribe el radio del círculo: ");
    scanf("%d",&radio);
    printf("El diámetro es: %d \n", 2 * radio);
    printf("El área es: %.3f\n", 3.14 * radio * radio);

    return 0;
}
