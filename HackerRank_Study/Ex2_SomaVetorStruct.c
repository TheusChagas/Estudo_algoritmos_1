#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct vetor{
    int x;
    int y;
}Vetor;

Vetor somaVetor(int v1x, int v1y, int v2x, int v2y){
    Vetor vet;
    vet.x = v1x+v2x;
    vet.y = v1y+v2y;
    return vet;
}

int main() {
    Vetor a;
    Vetor b;
    scanf("%d", &a.x);
    scanf("%d", &a.y);
    scanf("%d", &b.x);
    scanf("%d", &b.y);
    Vetor c = somaVetor(a.x, a.y, b.x, b.y);
    printf("%d %d", c.x, c.y);
}