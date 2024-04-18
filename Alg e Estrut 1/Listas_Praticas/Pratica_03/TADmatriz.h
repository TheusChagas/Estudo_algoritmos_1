#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int **arr; // Matriz l x c (arranjo bidimensional)
    int l; // quantidade de linhas
    int c; // quantidade de colunas
}Matriz;

Matriz * iniciar(int l, int c){
    Matriz *m = (Matriz*)malloc(sizeof(Matriz));
    m->l = l;
    m->c = c;
    m->arr = (int**)malloc(l*sizeof(int*));
    for(int i=0; i<l; i++){
        m->arr[i] = (int*)malloc(c*sizeof(int));
    }
    return m;
}

void alterar(Matriz *m, int x, int i, int j){
    m->arr[i][j] = x;
}

int *obter_linha(Matriz *m, int i){
    return m->arr[i];
}

int *obter_coluna(Matriz *m, int i){
    int *coluna = (int*)malloc(m->l * sizeof(int));
    for(int j=0; j<m->l; j++){
        coluna[j] = m->arr[j][i];
    }
    return coluna;
}

Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf){
    int l = lf - li +1;
    int c = cf - ci +1;
    Matriz *submat = iniciar(l, c);
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            submat->arr[i][j] = m->arr[i+li][j+ci];
        }
    }
    return submat;
}