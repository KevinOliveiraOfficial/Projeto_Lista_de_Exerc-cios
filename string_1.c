#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_CHAR 80

int calcQtdChar( char string[MAX_CHAR] )
{
    int qtd;
    for ( qtd = 0; qtd < MAX_CHAR; qtd++ )
        if ( string[qtd] == '\0' )
            break;

    return qtd;
}

int calcQtdCharPontuacao( char string[MAX_CHAR] )
{
    int qtd = 0;
    for ( int i = 0; i < MAX_CHAR; i++ )
        if ( string[i] == '.' || string[i] == ';' || string[i] == ':'
            || string[i] == '?' || string[i] == '!' || string[i] == '-' )
            qtd++;

    return qtd;
}

int calcQtdCharNumero( char string[MAX_CHAR] )
{
    int qtd = 0;
    for ( int i = 0; i < MAX_CHAR; i++ )
        if ( string[i] >= 48 && string[i] <= 57 )
            qtd++;

    return qtd;
}
int calcQtdCharMinusculo( char string[MAX_CHAR] )
{
    int qtd = 0;
    for ( int i = 0; i < MAX_CHAR; i++ )
        if ( string[i] >= 97 && string[i] <= 122 )
            qtd++;

    return qtd;
}

int main()
{
    char string[MAX_CHAR];
    printf("Digite a string:\n");
    scanf( "%s", string );
    printf( "Quantidade de caracteres: %d\n", calcQtdChar(string) );
    printf( "Quantidade de caracteres de pontuacao: %d\n", calcQtdCharPontuacao(string) );
    printf( "Quantidade de caracteres de numero: %d\n", calcQtdCharNumero(string) );
    printf( "Quantidade de caracteres minusculo: %d\n", calcQtdCharMinusculo(string) );
    return 0;
}
