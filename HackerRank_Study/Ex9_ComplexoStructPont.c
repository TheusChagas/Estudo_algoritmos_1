#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct complexo
{
    float real, img, mod;
}Complexo;


void complex(float *real, float *img){
    Complexo a;
    a.mod = sqrt(pow((*real), 2) + pow((*img), 2));
    printf("%.1f+%.1fi\n", (*real), (*img));
    printf("&.1f", a.mod);
}

int main() {
    float real, img;
    scanf("%f", &real);
    scanf("%f", &img);
    complex(&real, &img);
    return 0;
}
