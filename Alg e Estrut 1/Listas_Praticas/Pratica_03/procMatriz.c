#include "TADmatriz.h"

int main(){
    int l, c;
    scanf("%d %d", &l, &c);
    Matriz *m = iniciar(l, c);
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &(m->arr[i][j]));
        }
    }
    
    int pl, pc;
    scanf("%d %d", &pl, &pc);
    int li, ci, lf, cf;
    scanf("%d %d %d %d", &li, &ci, &lf, &cf);
    
    int *linha = obter_linha(m, pl);
    for(int i=0; i<c; i++){
        printf("%d ", linha[i]);
    }
    printf("\n");
    
    int *coluna = obter_coluna(m, pc);
    for(int i=0; i<l; i++){
        printf("%d ", coluna[i]);
    }
    printf("\n");
    
    Matriz *submat = obter_submat(m, li, ci, lf, cf);
    for(int i=0; i<submat->l; i++){
        for(int j=0; j<submat->c; j++){
            printf("%d ", submat->arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<l; i++){
        free(m->arr[i]);
    }
    free(m->arr);
    free(m);
    free(coluna);
    free(linha);
    for(int i=0; i<submat->l; i++){
        free(submat->arr[i]);
    }
    free(submat->arr);
    free(submat);
    
    return 0;
}