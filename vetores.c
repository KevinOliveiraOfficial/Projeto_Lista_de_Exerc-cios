#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcMenorNumeroVetor( int size, int vetor[size] )
{
    int aux = vetor[0];
    for( int i = 0; i < size; i++ )
    {
        if( vetor[i] < aux )
            aux = vetor[i];
    }
    return aux;
}
int calcMaiorNumeroVetor( int size, int vetor[size] )
{
    int aux = vetor[0];
    for( int i = 0; i < size; i++ )
    {
        if( vetor[i] > aux )
            aux = vetor[i];
    }
    return aux;
}

void printaVetor( int size, int vetor[size] )
{
    for ( int i = 0; i < size; i++ )
        printf("%d ", vetor[i]);
}
void printaVetorOrdenado( int size, int vetor[size] )
{
    int aux;
    for ( int i = 0; i < size; i++ )
    {
        for ( int j = i+1; j < size; j++ )
        {
            if ( vetor[i] > vetor[j] )
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }

    }
    for ( int i = 0; i < size; i++ )
        printf("%d ", vetor[i]);
}
void menuVetorT10MenorMaior()
{
    printf("Digite 10 valores:\n");
    int vetor[10];
    for ( int i = 0; i < 10; i++ )
        scanf("%d", &vetor[i]);

    printf("\nVetor criado:");
    printaVetor( 10, vetor );
    printf("\n\nMenor numero: %d\n", calcMenorNumeroVetor( 10, vetor ) );
    printf("Maior numero: %d", calcMaiorNumeroVetor( 10, vetor ) );
    printf("\n\n");
}

void menuVetorT10Ordenado()
{
    printf("Digite 10 valores:\n");
    int vetor[10];
    for ( int i = 0; i < 10; i++ )
        scanf("%d", &vetor[i]);

    printf("\nVetor criado: ");
    printaVetor( 10, vetor );
    printf("\nVetor ordenado: ");
    printaVetorOrdenado( 10, vetor );
    printf("\n\n");
}

float menuMedia5Notas( float notas[5] )
{
    float media = 0.0;
    for ( int i = 0; i < 5; i++ )
        media += notas[i];

    return media/5.0;
}

int calculaMediaVetorInt( int size, int array[size] )
{
    int media = 0;
    for ( int i = 0; i < size; i++ )
        media += array[i];

    return media/size;
}

double * criaArrayDouble( int size, double array[size] )
{
     for ( int i = 0; i < size; i++ )
        scanf("%lf", &array[i]);

    return array;
}

void menuVetorValoresIguaisAMedia()
{
    printf("Digite 10 valores:\n");
    int vetor[10];
    for ( int i = 0; i < 10; i++ )
        scanf("%d", &vetor[i]);

    printf("\nVetor criado: ");
    printaVetor( 10, vetor );
    int media = calculaMediaVetorInt( 10, vetor );
    printf("\nValores iguais a media (%d): ", media);

    for (int i = 0; i < 10; i++ )
        if ( vetor[i] == media )
            printf("%d ", vetor[i]);

    printf("\n\n");
}
void menuDiferencaEntreAMedia()
{
    int row = 5;
    int col = 3;
    float matriz[row][col];

    // le matriz
    printf("Digite os valores da matriz 5x3:\n");

    for ( int i = 0; i < row; i++ )
        for ( int j = 0; j < col; j++ )
            scanf("%f", &matriz[i][j]);

    // media colunas pares
    int mediaCol = 0;
    int mediaColN = 0;
    for ( int i = 0; i < row; i++ )
    {
        for ( int j = 0; j < col; j++ )
        {
            if ( j % 2 != 0 )
                continue;

            mediaCol += matriz[i][j];
            mediaColN++;
        }
    }
    // divide pela quantidade de linhas corrigir numero de colunas
    mediaColN = mediaColN / row;
    mediaCol = mediaCol / mediaColN;

    // media linha impar
    int mediaRow = 0;
    int mediaRowN = 0;
    for ( int i = 0; i < row; i++ )
    {
        if ( i % 2 == 0 )
            continue;
        mediaRowN++;
        for ( int j = 0; j < col; j++ )
        {
            mediaRow += matriz[i][j];
        }
    }
    mediaRow = mediaRow / mediaRowN;
    printf("Media das colunas pares: %d\n", mediaCol);
    printf("Media das linhas impares: %d\n", mediaRow);
    printf("Diferenca entre a media das colunas pares e linhas impares: %d\n\n", mediaCol -  mediaRow);
}

void main()
{
    int opcao = -1;
    while ( opcao != 0 )
    {
        printf("Digite uma opcao:\n");
        printf("1) Calcular menor e maior numero do vetor tamanho = 10\n");
        printf("2) Calcular ordenacao do vetor tamanho = 10\n");
        printf("3) Calcular valores iguais a media\n");
        printf("4) Calcular diferenca entre a media\n\n");

        printf("0) Sair\n");
        scanf("%d", &opcao);
        system("cls");

        if ( opcao == 1 ) {
            menuVetorT10MenorMaior();
        }
        else if ( opcao == 2 ) {
            menuVetorT10Ordenado();
        }
        else if ( opcao == 3 ) {
            menuVetorValoresIguaisAMedia();
        }
        else if ( opcao == 4 ) {
            menuDiferencaEntreAMedia();
        }
    }
}
