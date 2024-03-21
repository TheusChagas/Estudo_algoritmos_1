#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void frac(float *num){
    float fr;
    int i;
    i = (*num);
    fr = (*num)-i;
    printf("N=%.3f I=%d F=%.3f\n", (*num), i, fr);
}

int main() {
    int n, i;
    float num;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%f", &num);
        frac(&num);
    }

    return 0;
}
