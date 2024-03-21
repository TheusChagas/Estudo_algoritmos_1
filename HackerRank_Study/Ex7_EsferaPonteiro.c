#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void esfera(float *r){
    printf("%.2f %.2f", 4*3.14*((*r)*(*r)), ((4.0/3.0)*3.14)*((*r)*(*r)*(*r)));
}

int main() {
    float n;
    scanf("%f", &n);
    esfera(&n);
    return 0;
}
