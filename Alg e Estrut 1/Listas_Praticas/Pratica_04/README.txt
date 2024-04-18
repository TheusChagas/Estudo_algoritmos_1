Prática 04: TAD - Listas Estáticas - intercala ordenado

Utilize a TAD fornecida e acrescente a ela a implementação de uma função que intercale duas listas em uma terceira lista de forma ordenada.

// Retorna uma lista resultante da intercalação ordenada de 2 outras listas:

Lista* intercala_ordenado(Lista *l1, Lista *l2);

/* Exemplo:

L1 = {4, 3, 2, 1}

L2 = {9, 8, 7, 6, 5}

  Intercalação ordenada = {1, 2, 3, 4, 5, 6, 7, 8, 9} */

Input Format

Deve ser lido um valor inteiro n que representa a quantidade de elementos de uma lista. Em seguida, devem ser lidos os n elementos da lista. Repetir o processo para ao segunda lista.

Constraints

Devem ser lidos valores inteiros positivos ou negativos.

Output Format

A lista resultante da intercalação ordenada de duas outras duas listas.

Sample Input 0

4
4 3 2 1
5
9 8 7 6 5

Sample Output 0

1 2 3 4 5 6 7 8 9