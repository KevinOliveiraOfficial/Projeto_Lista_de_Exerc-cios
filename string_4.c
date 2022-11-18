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
    char nome[MAX_CHAR];
    char endereco[MAX_CHAR];
    char telefone[15];
    char idade[3];
    printf("Digite seu nome:\n");
    scanf( "%s", nome );
    printf("Digite seu endereco:\n");
    scanf( "%s", endereco );
    printf("Digite seu telefone:\n");
    scanf( "%s", telefone );
    printf("Digite sua idade:\n");
    scanf( "%s", idade );
    printf("\n");
    printf("Seu nome eh %s, voce tem %s anos, mora na rua %s e seu telefone eh %s .", nome, idade, endereco, telefone);
    return 0;
}
