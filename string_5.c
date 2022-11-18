#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_CHAR 80

void verificaResposta( char string[MAX_CHAR] )
{
    if ( strcmp(string, 'SIM') )
        printf("1");
    else if ( strcmp(string, 'NAO') )
        printf("0");
}
