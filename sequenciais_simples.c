#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menuMetro()
{
    float x;
    printf( "Digite o valor do metro: " );
    scanf( "%f", &x );

    printf( "Resultado em decimetros: %.0f\n", x*10 );
    printf( "Resultado em centimetros: %.0f\n", x*100 );
    printf( "Resultado em milimetros: %.0f\n\n", x*1000 );
}

void menuTabuada()
{
    printf("Tabuada do 1 ao 9:\n\n");
    for ( int i = 1; i < 10; i++ ) {
        for ( int j = 0; j <= 10; j++ )
            printf("%d X %d = %d\n", i, j, i * j);
        printf("\n");
    }
}
void menuHexaOctal()
{
    int n = 0;
    printf( "Digite o valor decimal: " );
    scanf( "%d", &n );
    printf( "Resultado octal: %o\n", n );
    printf( "Resultado hexa: %x\n\n", n );
}
void menuFahrenheitParaCelsius()
{
    float n = 0;
    printf( "Digite o valor em Fahrenheit: " );
    scanf( "%f", &n );
    n = (n-32.0) * (5.0/9.0);
    int n_i = (int)n;
    printf( "Resultado Fahrenheit (com double): %f\n", n );
    printf( "Resultado Fahrenheit (com int): %d\n\n", n_i );
}
void menuCalculoGeralDoisNumeros()
{
    int n1, n2;
    printf( "Digite o valor dos dois numeros: " );
    scanf( "%d %d", &n1, &n2 );
    printf( "Soma dos numeros: %d\n", n1+n2 );
    printf( "Produto do primeiro numero pelo quadrado do segundo: %d\n", n1 * (int)pow(n2, 2.0) );
    printf( "Quadrado do primeiro numero: %d\n", (int)pow(n1, 2) );
    printf( "Raiz quadrada da soma dos quadrados: %f\n", sqrt(pow(n1, 2) + pow(n2, 2.0)) );
    printf( "Seno da diferenca do primeiro numero pelo segundo: %f\n", sin(n1-n2) );
    printf( "Modulo do primeiro numero: %d\n\n", abs(n1) );
}
void main()
{
    int opcao = -1;
    while ( opcao != 0 )
    {
        printf("Digite uma opcao:\n");
        printf("1) Calcular valor do metro\n");
        printf("2) Imprimir tabuada do 1 ao 9\n");
        printf("3) Calcular hexa e octal de um decimal\n");
        printf("4) Converter Fahrenheit para Celsius\n");
        printf("5) Calculo geral de dois numeros\n\n");
        printf("0) Sair\n");
        scanf("%d", &opcao);
        system("cls");

        if ( opcao == 1 ) {
            menuMetro();
        }
        else if ( opcao == 2 ) {
            menuTabuada();
        }
        else if ( opcao == 3 ) {
            menuHexaOctal();
        }
        else if ( opcao == 4 ) {
            menuFahrenheitParaCelsius();
        }
        else if ( opcao == 5 ) {
            menuCalculoGeralDoisNumeros();
        }
    }
}
