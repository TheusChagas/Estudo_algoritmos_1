#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int *item; // Array (vetor) de tamanho n
  int q; // quantidade de itens inseridos em v
  int n; // tamanho (capacidade) de v
}Vetor;

Vetor * iniciar(int n){
    Vetor *v=(Vetor *)malloc(sizeof(Vetor));
    v->item = (int *)malloc(n*sizeof(int));
    v ->q=0;
    v->n=n;
    return v;
}

int inserir(Vetor *v, int x){
    if(v->q < v->n){
        v->item[v->q++]=x;
        return 1;
    }
    return 0;
}
// retorna 1 se a operação foi bem-sucedida

// Intercalação entre dois vetores
/*
Exemplo:
    v1 = {1, 2, 3, 4}
    v2 ={5, 6, 7, 8, 9}
    Intercalação = {1, 5, 2, 6, 3, 7, 4, 8, 9}
*/
Vetor * intercalar(Vetor *v1, Vetor *v2){
    int newSize = v1 ->q + v2 ->q;
    Vetor *result = iniciar(newSize);
    
    int i = 0, j = 0, k = 0;
    while(i < v1 -> q && j < v2->q){
        result->item[k++] = v1->item[i++];
        result->item[k++] = v2->item[j++];
    }
    
    while(i < v1 ->q){
        result->item[k++] = v1->item[i++];
    }
    while(j< v2 ->q){
        result->item[k++] = v2->item[j++];
    }
    result ->q= newSize;
    return result;
}

// Concatenação entre dois vetores
/*
Exemplo:
    v1 = {1, 2, 3, 4}
    v2 ={5, 6, 7, 8, 9}
    Concatenação = {1, 2, 3, 4, 5, 6, 7, 8, 9}
*/
Vetor * concatenar(Vetor *v1, Vetor *v2){
    int newSize = v1 ->q + v2 ->q;
    Vetor *result=iniciar(newSize);
    
    for(int i=0; i<v1->q; i++){
        result->item[i] = v1->item[i];
    }
        
    for(int j=0; j<v2->q; j++){
        result->item[v1->q +j] = v2->item[j];
    }
    result ->q= newSize; 
    return result;
}

// Obter subvetor
/*
    ini: posição inicial
    fim: posição final

    Exemplo
    v1 = {1, 2, 3, 4, 5, 6}
    ini = 1, fim = 3
    subvetor = {2, 3, 4}
*/
Vetor * subvetor(Vetor *v1, int ini, int fim){
    int newSize = fim - ini + 1; 
    Vetor *result=iniciar(newSize);
    for(int i=ini; i<=fim; i++){
        result->item[i-ini] = v1->item[i];
    }
    result->q = newSize;
    return result;
    
    
    
    
}