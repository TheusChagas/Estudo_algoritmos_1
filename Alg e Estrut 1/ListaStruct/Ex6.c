/*
Defina uma struct que defina uma matriz. A struct deve incluir uma matriz, o numero de linhas
e numero de colunas. Em seguida faça:
a) - Inicializar a struct.
b) - Preencher a matriz.
c) - Imprimir o conteudo da matriz.
d) - Imprimir a soma entre duas matrizes.
e) - Imprimir a soma entre duas matrizes.
f) - Fazer a transposta da matriz.

*/
#include <stdio.h>
#include <time.h>

typedef struct matriz{
    int mat[4][6];
}Matriz;
Matriz GerarMatriz(){
    int i,j;
    Matriz a;
    srand(time(NULL));
    for(i=0; i<4; i++)
    {
        for(j=0; j<6; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    return a;
}
int main(){
    Matriz a = GerarMatriz();

}