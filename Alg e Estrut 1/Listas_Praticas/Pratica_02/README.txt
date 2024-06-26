Prática 02: TAD - tipo vetor

Crie um TAD para processamento de vetores com a seguinte estrutura e operações, onde item é o vetor e n é a capacidade do vetor e q a quantidade de elementos contidos no vetor:


typedef struct{
  int *item; // Array (vetor) de tamanho n
  int q; // quantidade de itens inseridos em v
  int n; // tamanho (capacidade) de v
}Vetor;

Vetor * iniciar(int n);

int inserir(Vetor *v, int x); // retorna 1 se a operação foi bem-sucedida

// Intercalação entre dois vetores
/*
Exemplo:
    v1 = {1, 2, 3, 4}
    v2 ={5, 6, 7, 8, 9}
    Intercalação = {1, 5, 2, 6, 3, 7, 4, 8, 9}
*/
Vetor * intercalar(Vetor *v1, Vetor *v2);

// Concatenação entre dois vetores
/*
Exemplo:
    v1 = {1, 2, 3, 4}
    v2 ={5, 6, 7, 8, 9}
    Concatenação = {1, 2, 3, 4, 5, 6, 7, 8, 9}
*/
Vetor * concatenar(Vetor *v1, Vetor *v2);

// Obter subvetor
/*
    ini: posição inicial
    fim: posição final

    Exemplo
    v1 = {1, 2, 3, 4, 5, 6}
    ini = 1, fim = 3
    subvetor = {2, 3, 4}
*/
Vetor * subvetor(Vetor *v1, int ini, int fim);

Input Format

Deve ser lido um valor inteiro n que representa a quantidade de elementos de um v. Em seguida, devem ser lidos os n elementos do vetor. Repetir o processo para o segundo vetor. Por fim, na última linha devem ser lidas as posições ini e fim para a geração de um subvetor a partir do primeiro vetor que foi lido.

Constraints

Não há.

Output Format

Vetores na seguinte ordem: resultantes da intercalação, resultantes da concatenação e subvetor.

Sample Input 0

4
1 2 3 4
5
5 6 7 8 9
1 2

Sample Output 0

1 5 2 6 3 7 4 8 9
1 2 3 4 5 6 7 8 9
2 3