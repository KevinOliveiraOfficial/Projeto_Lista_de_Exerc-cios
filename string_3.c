#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_CHAR 80

void printStringRecursivo(char *str, int reverso )
{
   if (*str)
   {
       if ( reverso == 0)
       {
           printf("%c", *str);
           printStringRecursivo(str+1, reverso);
       }
       else
       {
           printStringRecursivo(str+1, reverso);
           printf("%c", *str);
       }
   }
}

int main()
{
    char string[MAX_CHAR];
    printf("Digite a string:\n");
    scanf( "%s", string );
    printStringRecursivo( string, 0 );
    printf("\n");
    printStringRecursivo( string, 1 );
    printf("\n");
    return 0;
}
