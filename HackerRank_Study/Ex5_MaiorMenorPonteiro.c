#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int aux;
        aux = *a;
        *a = *b;
        *b = aux;
}

int main() {
    int n, i, a, b;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        if(a < b){
            troca(&a, &b);
        }
        printf("A=%d B=%d\n", a,b);
    }
    return 0;
}
