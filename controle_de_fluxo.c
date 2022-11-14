#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menuMaiorMenorIgual()
{
    int n1, n2;
    printf( "Digite o valor dos dois numeros: " );
    scanf( "%d %d", &n1, &n2 );

    if ( n1 == n2 )
        printf( "valores iguais\n" );
    else
    {
        int lowest = n1 > n2 ? n2 : n1;
        int bigger = n1 > n2 ? n1 : n2;

        for ( int i = bigger; i >= lowest; i-- )
            printf( "%d ", i );
        printf("\n");
    }
    printf("\n");
}

void menuASCII()
{
    printf("ASCII do 1 ao 127:\n\n");
    for ( int i = 0; i < 128; i++ ) {
        printf("ASCII %d: Decimal = %d; Hexa=%x; Char=%c\n", i, i, i, i);
    }
    printf("\n");
}
void menuInflacionar()
{
    float n = 0;
    printf( "Digite o valor: " );
    scanf( "%f", &n );
    while ( n < 100 )
    {
        n += n * 0.10;
        break;
    }

    while ( n >= 100 )
    {
        n += n * 0.20;
        break;
    }

    printf( "Valor inflacionado: %f\n", n );
}
void menuOperador()
{
    int n1, n2;
    char o;
    printf( "Digite a expressao no formato: <valor1> <operador> <valor2>\n" );
    scanf( "%d %c %d", &n1, &o, &n2 );
    if ( o == '-' )
        printf( "Resultado: %d %c %d = %d\n", n1, o, n2, (n1 - n2));
    else if ( o == '+' )
        printf( "Resultado: %d %c %d = %d\n", n1, o, n2, (n1 + n2));
    else if ( o == '*' )
        printf( "Resultado: %d %c %d = %d\n", n1, o, n2, (n1 * n2));
    else if ( o == '/' )
        printf( "Resultado: %d %c %d = %d\n", n1, o, n2, (n1 / n2));

    printf( "\n" );
}
void menuCalculoMediaNota()
{
    float n1, n2;
    while ( n1 != 50.0 )
    {

        printf( "Digite o valor da primeira nota: " );
        scanf( "%f", &n1 );
        if ( n1 == 50.0 )
        {
            printf("\n");
            break;
        }
        printf( "Digite o valor da segunda nota: " );
        scanf( "%f", &n2 );

        printf( "Media: %.2f\n\n", (n1+n2)/2.0 );
    }
}
void main()
{
    int opcao = -1;
    while ( opcao != 0 )
    {
        printf("Digite uma opcao:\n");
        printf("1) Calcular menor, maior, igual \n");
        printf("2) Imprimir tabela ASCII do 0 ao 127\n");
        printf("3) Inflacionar preco\n");
        printf("4) Calcular expressao\n");
        printf("5) Calcular media de duas notas\n\n");
        printf("0) Sair\n");
        scanf("%d", &opcao);
        system("cls");

        if ( opcao == 1 ) {
            menuMaiorMenorIgual();
        }
        else if ( opcao == 2 ) {
            menuASCII();
        }
        else if ( opcao == 3 ) {
            menuInflacionar();
        }
        else if ( opcao == 4 ) {
            menuOperador();
        }
        else if ( opcao == 5 ) {
            menuCalculoMediaNota();
        }
    }
}
