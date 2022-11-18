#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_CHAR 80

float * ler3Notas()
{
    float notas[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    return notas;
}
