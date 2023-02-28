#include <stdio.h>
int main()
{

    int final = 301;
    int puntuacion = 0;
    int acumulado = 0;

    printf("Puntuación: \n");
    scanf("%d", &puntuacion);
    acumulado = puntuacion + acumulado;
    
    while (acumulado < final)
    {
        printf("Puntuación: \n");
        scanf("%d", &puntuacion);
        acumulado = puntuacion + acumulado;
    }

    return 0;
}