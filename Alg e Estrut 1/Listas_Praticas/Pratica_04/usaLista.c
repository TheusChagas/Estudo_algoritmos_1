#include<stdio.h>
#include"lista.h"

int main(){
    int size, chave, i;
    scanf("%d", &size);
    struct Lista *l1 = criar_lista();
    for(i=0; i<size; i++){
        scanf("%d", &chave);
        inserir_ordenado(l1, chave);
    }
    scanf("%d", &size);
    struct Lista *l2 = criar_lista();
    for(i=0; i<size; i++){
        scanf("%d", &chave);
        inserir_ordenado(l2, chave);
    }
    
    struct Lista *l3 = intercala_ordenado(l1, l2);
    
    imprimir_lista(l3);
    
    liberar_lista(l1);
    liberar_lista(l2);
    liberar_lista(l3);
    
    
    return 0;
}