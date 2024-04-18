#include "TADvetor.h"
int main (){
    int n, n2, ini, fim,i;
    
    scanf("%d", &n);
    Vetor *v1=iniciar(n); 
    for(i=0; i<n; i++){
        scanf("%d", &v1->item[i]);
        v1->q++;
    }
    scanf("%d", &n2);
    Vetor *v2=iniciar(n2);
    for(i=0; i<n2; i++){
        scanf("%d", &v2->item[i]);
        v2->q++;
    }
    
    scanf("%d %d", &ini, &fim);
    
    Vetor *intercalacao = intercalar(v1, v2);
    Vetor *concatenacao = concatenar(v1, v2);
    Vetor *sub = subvetor(v1, ini, fim);
    
    for(i=0; i<intercalacao->q; i++){
        printf("%d", intercalacao->item[i]);
    }
    printf("\n");
    for(i=0; i< concatenacao->q; i++){
        printf("%d", concatenacao->item[i]);
    }
    printf("\n");
    for(i=0; i< sub->q; i++){
        printf("%d", sub->item[i]);
    }
    printf("\n");
    
    free(v1->item);
    free(v1);
    free(v2->item);
    free(v2);
    free(sub->item);
    free(sub);
    free(concatenacao->item);
    free(concatenacao);
    free(intercalacao->item);
    free(intercalacao);
    
    return 0;
}