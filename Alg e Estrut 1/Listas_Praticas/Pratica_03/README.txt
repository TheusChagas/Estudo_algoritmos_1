Prática 03: TAD - operações com matriz

Crie um TAD para processamento de matrizes com a seguinte estrutura e operações, onde m é a matriz, l é a quantidade de linhas e c é a quantidade de colunas:


typedef struct{
    int **arr; // Matriz l x c (arranjo bidimensional)
    int l; // quantidade de linhas
    int c; // quantidade de colunas
}Matriz;

Matriz * iniciar(int l, int c);


// A matriz recebe x na posição [i][j]
void alterar(Matriz *m, int x, int i, int j);


// Retorna a linha da matriz na posição i
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}

Linha na posição 1: {5, 6, 7, 8} 
*/
int *obter_linha(Matriz *m, int i);


// Retorna a coluna da matriz na posição i
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}
Coluna na posição 2: {3, 7, 11} 
*/
int *obter_coluna(Matriz *m, int i);

// obter sub-matriz
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}
li = 1, ci = 1, lf = 2, cf = 2

submat = {{6, 7},
	      {10, 11}}

Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf);

Input Format

    Na primeira linha, devem ser lidos dois números inteiros (e.g. l e c).
    Em seguida, ler l x c elementos.
    Após, ler dois números inteiros, sendo o primeiro a posição de uma linha (pl) e o segundo, a posição de uma coluna (pc).
    Por fim, ler quatro números inteiros referentes a posição de uma submatriz.

Constraints

Não há.

Output Format

    Na primeira linha, imprimir a linha da posição pl retornada pela função obter_linha.
    Na segunda linha, imprimir '\n'.
    Na terceira linha, imprimir a coluna da posição pc retornada pela função obter_coluna.
    Na quarta linha, imprimir '\n'.
    A partir da quinta linha, imprimir a submatriz.

Sample Input 0

3 4
1  2  3  4
5  6  7  8
9 10 11 12
1 2
1 1 2 2

Sample Output 0

5 6 7 8

3 7 11

 6  7
10 11