#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcPotencia( int x, int n ) {
    return pow( x, n );
}

int fatorialRec( int x ) {
    if ( x == 0 || x == 1)
        return 1;
    else
        return x * fatorialRec( x-1 );
}

int fatorialLoop( int x ) {
    int res = 1;
    for ( int i = x; i > 0; i-- ) {
       res = res * i;
    }
    return res;
}

void imprimeValorPagamento( int opcao, float valor ) {
    if ( opcao == 1 )
        printf("Total a pagar:\nR$ %.2f\n", (valor - (valor * 0.10)));
    else if ( opcao == 2 )
    {
        printf("Total a pagar:\n");
        printf("2x de R$ %.2f\n", valor/2);
    }
    else if ( opcao == 3 )
    {
        if ( valor <= 100)
        {
            printf("Opcao invalida. Disponivel somente para compras acima de R$ 100,00\n\n");
            return;
        }
        for ( int i = 3; i <= 10; i++ )
        {
            printf("%d x de R$ %.2f\n", i, (valor + ((valor * 0.03) * i))/i);
        }
    }
    printf("\n");
}

void pagamento( float valor ) {

    printf("\nComo deseja pagar?\n\n");
    printf("1) Opcao: a vista com 10 porcento de desconto\n");
    printf("2) Opcao: em duas vezes (preco da etiqueta)\n");
    printf("3) Opcao: de 3 ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de R$ 100,00).\n");
    int opcao = 0;
    scanf("%d", &opcao);
    imprimeValorPagamento(opcao, valor );
}

void menuPotencia()
{
    int x = 0, n = 0;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Resultado da Potencia: %.0f\n\n", calcPotencia( x, n ));
}

void menuFatorialRecursivo()
{
    int n = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Resultado do fatorial recursivo: %d\n\n", fatorialRec( n ));
}
void menuFatorialLaco()
{
    int n = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Resultado do fatorial laco: %d\n\n", fatorialLoop( n ));
}
void menuCalcularPagamento()
{
    float valor = 0;
    printf("Digite o valor a pagar: ");
    scanf("%f", &valor);
    pagamento( valor );
}
void main()
{
    int opcao = -1;
    while ( opcao != 0 )
    {
        printf("Digite uma opcao:\n");
        printf("1) Calcular potencia\n");
        printf("2) Calcular fatorial recursivo\n");
        printf("3) Calcular fatorial laco\n");
        printf("4) Calcular pagamento\n\n");
        printf("0) Sair\n");
        scanf("%d", &opcao);
        system("cls");

        if ( opcao == 1 ) {
            menuPotencia();
        }
        else if ( opcao == 2 ) {
            menuFatorialRecursivo();
        }
        else if ( opcao == 3 ) {
            menuFatorialLaco();
        }
        else if ( opcao == 4 ) {
            menuCalcularPagamento();
        }
    }
}
