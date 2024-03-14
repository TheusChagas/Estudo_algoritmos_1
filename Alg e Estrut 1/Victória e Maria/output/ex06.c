#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct matriz
{
    int linha;
    int coluna;
    int matriz;
};

struct matriz iniciaolizMatriz(int x, int y, int matriz[x][y])
{
    struct matriz abudabi;
    abudabi.linha = x;
    abudabi.coluna = y;
    abudabi.matriz = matriz[x][y];
};

int preencher(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    return matriz[i][j];
}

int main()
{
    struct matriz A;
    A = iniciaolizMatriz(8,8,A[8][8]);

    return 0;
}