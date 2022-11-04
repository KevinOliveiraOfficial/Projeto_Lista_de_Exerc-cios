#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printaSomaDeCadaColuna( int row, int col, int matriz[row][col] )
{
    int soma;
    for ( int j = 0; j < col; j++ )
    {
        soma = 0;
        for ( int i = 0; i < row; i++ )
            soma += matriz[i][j];

        printf("%d ", soma);
    }
}
void printaSomaDeCadaLinhaReal( int row, int col, float matriz[row][col] )
{
    float soma;
    for ( int i = 0; i < row; i++ )
    {
        soma = 0.0;
        for ( int j = 0; j < col; j++ )
            soma += matriz[i][j];

        printf("Soma da linha %d: %.2f\n", i, soma);
    }
}
int somaDosImpares( int row, int col, int matriz[row][col] )
{
    int soma = 0;
    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < col; j++ )
        {
            if( matriz[i][j] % 2 != 0 )
                soma += matriz[i][j];
        }
    }
    return soma;
}
int calcMenorNumeroMatriz( int row, int col, int matriz[row][col] )
{
    int menor = matriz[0][0];
    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < col; j++ )
        {
            if( matriz[i][j] < menor )
                menor = matriz[i][j];
        }
    }
    return menor;
}
int calcMaiorNumeroMatriz( int row, int col, int matriz[row][col] )
{
    int maior = matriz[0][0];
    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < col; j++ )
        {
            if( matriz[i][j] > maior )
                maior = matriz[i][j];
        }
    }
    return maior;
}
void printaDiagonalPrincipalMatriz( int row, int col, int matriz[row][col] )
{
    for ( int i = 0; i < row; i++ )
    {
        printf("\n");
        for ( int j = 0; j < col; j++ ) {
            if ( i == j )
                printf("%d ", matriz[i][j]);
            else
                printf("* ");
        }
    }
}
void printaDiagonalSecundariaMatriz( int row, int col, int matriz[row][col] )
{
    for ( int i = 0; i < row; i++ )
    {
        printf("\n");
        for ( int j = 0; j < col; j++ ) {
            if ( ((i+j+1) == row) || ((i+j+1) == col) )
                printf("%d ", matriz[i][j]);
            else
                printf("* ");
        }
    }
}
void printaMatriz( int row, int col, int matriz[row][col] )
{
    for ( int i = 0; i < row; i++ )
    {
        printf("\n");
        for ( int j = 0; j < col; j++ ) {
            printf("%d ", matriz[i][j]);
        }
    }
}
void printaMatrizReal( int row, int col, float matriz[row][col] )
{
    for ( int i = 0; i < row; i++ )
    {
        printf("\n");
        for ( int j = 0; j < col; j++ ) {
            printf("%f ", matriz[i][j]);
        }
    }
}
void menuMatriz3x3Impar()
{
    int row = 3, col = 3;
    printf("Digite a matriz:\n");
    int matriz[row][col];
    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%d", &matriz[i][j]);

    printf("\nMatriz criada:");
    printaMatriz( row, col, matriz );
    printf("\n\nSoma dos numeros impares:\n%d", somaDosImpares( row, col, matriz ) );
    printf("\n\n");
}
void menuMatriz3x3MenorMaior()
{
    int row = 3, col = 3;
    printf("Digite a matriz:\n");
    int matriz[row][col];
    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%d", &matriz[i][j]);

    printf("\nMatriz criada:");
    printaMatriz( row, col, matriz );
    printf("\n\nMenor numero: %d\n", calcMenorNumeroMatriz( row, col, matriz ) );
    printf("Maior numero: %d", calcMaiorNumeroMatriz( row, col, matriz ) );
    printf("\n\n");
}
void menuMatriz4x4DiagonalPrincipal()
{
    int row = 4, col = 4;
    printf("Digite a matriz:\n");
    int matriz[row][col];
    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%d", &matriz[i][j]);

    printf("\nMatriz criada:");
    printaMatriz( row, col, matriz );
    printf("\n\nDiagonal principal:");
    printaDiagonalPrincipalMatriz( row, col, matriz );
    printf("\n\n");
}
void menuMatriz4x4DiagonalSecundaria()
{
    int row = 4, col = 4;
    printf("Digite a matriz:\n");
    int matriz[row][col];
    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%d", &matriz[i][j]);

    printf("\nMatriz criada:");
    printaMatriz( row, col, matriz );
    printf("\n\nDiagonal secundaria:");
    printaDiagonalSecundariaMatriz( row, col, matriz );
    printf("\n\n");
}

void menuMatriz4x4SomaCadaColuna()
{
    int row = 4, col = 4, soma;
    printf("Digite a matriz:\n");
    int matriz[row][col];
    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%d", &matriz[i][j]);

    printf("\nMatriz criada:");
    printaMatriz( row, col, matriz );
    printf("\n\nSoma de cada coluna:\n");
    printaSomaDeCadaColuna( row, col, matriz );
    printf("\n\n");
}
void menuMatrizReal3x4SomaCadaLinha()
{
    int row = 3, col = 4, soma;
    printf("Digite a matriz:\n");
    float matriz[row][col];
    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%f", &matriz[i][j]);

    printf("\nMatriz criada:");
    printaMatrizReal( row, col, matriz );
    printf("\n\nSoma de cada coluna:\n");
    printaSomaDeCadaLinhaReal( row, col, matriz );
    printf("\n\n");
}

void main()
{
    int opcao = -1;
    while ( opcao != 0 )
    {
        printf("Digite uma opcao:\n");
        printf("1) Calcular soma dos numeros impares da matriz 3x3\n");
        printf("2) Calcular soma de cada coluna da matriz 4x4\n");
        printf("3) Calcular soma de cada linha da matriz real 3x4\n");
        printf("4) Calcular menor e maior numero da matriz 3x3\n");
        printf("5) Calcular diagonal principal da matriz 4x4\n");
        printf("6) Calcular diagonal secundaria da matriz 4x4\n\n");
        printf("0) Sair\n");
        scanf("%d", &opcao);
        system("cls");

        if ( opcao == 1 ) {
            menuMatriz3x3Impar();
        }
        else if ( opcao == 2 ) {
            menuMatriz4x4SomaCadaColuna();
        }
        else if ( opcao == 3 ) {
            menuMatrizReal3x4SomaCadaLinha();
        }
        else if ( opcao == 4 ) {
            menuMatriz3x3MenorMaior();
        }
        else if ( opcao == 5 ) {
            menuMatriz4x4DiagonalPrincipal();
        }
        else if ( opcao == 6 ) {
            menuMatriz4x4DiagonalSecundaria();
        }
    }
}
