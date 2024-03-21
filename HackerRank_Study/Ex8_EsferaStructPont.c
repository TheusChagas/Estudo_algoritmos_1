#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct esfera
{
    float raio, diametro, area, volume;
}Esfera;


void esfera(float *r){
    Esfera a;

    a.raio = *r;
    a.area = 4*3.14*pow((*r), 2);
    a.volume = (4.0/3.0)*3.14*pow((*r), 3);
    a.diametro = (*r)*2;
    printf("raio: %.1f\n", a.raio);
    printf("area: %.1f\n", a.area);
    printf("volume: %.1f\n", a.volume);
    printf("diametro: %.1f\n", a.diametro);
}

int main() {
    float n;
    scanf("%f", &n);
    esfera(&n);
    return 0;
}
