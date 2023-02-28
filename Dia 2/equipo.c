#include <stdio.h>

int main()
{

    int puntos;
    char equipo = 'a';
    int local = 0;
    int visitante = 0;

    while (equipo != 'f')
    {

        printf("equipo puntos: ");
        scanf("%c %d", &equipo, &puntos);

        if (equipo == 'v')
        {
            visitante = visitante + puntos;
        }
        else if (equipo == 'l')
        {
            local = local + puntos;
        }

        printf("Local %d - %d Visitante\n \n", local, visitante);
        fflush(stdin);
    }
    return 0;
}