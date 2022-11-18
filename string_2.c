#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_CHAR 80

int main()
{
    char string[MAX_CHAR];
    printf("Digite a string:\n");
    scanf( "%s", string );
    for ( int i = 0; i < MAX_CHAR; i++ )
    {
        if ( string[i] == '\0')
            break;
        else if ( string[i] == ' ' )
            printf("\n");

        printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}
