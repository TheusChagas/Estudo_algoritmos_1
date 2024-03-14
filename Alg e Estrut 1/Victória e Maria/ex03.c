#include<stdio.h>

struct retangulo
{
    int largura;
    int altura;
};


struct retangulo inicializStruct(int alt, int larg){
    struct retangulo x;
    x.altura = alt;
    x.largura = larg;
    return x;
}

struct retangulo instanciarStruct(struct retangulo x)
{
    struct retangulo r2;
    r2.altura = x.altura;
    r2.largura = x.largura;
    return r2;
}

void ImprimirAreaRetangulo(struct retangulo x)
{
    printf("A area do retangulo: %d\n", (x.altura * x.largura));
}

void imprimirRetangulo(struct retangulo x){
    printf("Altura: %d e largura: %d\n", x.altura, x.largura);
}

struct retangulo terceiro(struct retangulo x, struct retangulo y){
    struct retangulo soma;
    soma.altura = x.altura + y.altura;
    soma.largura = x.largura + y.largura;
    return soma;
};


int main(){
    struct retangulo r1 = inicializStruct(5,10);
    imprimirRetangulo(r1);
    ImprimirAreaRetangulo(r1);
    struct retangulo r2 = instanciarStruct(r1);
    imprimirRetangulo(r2);
    ImprimirAreaRetangulo(r2);
    struct retangulo r3 = terceiro(r1, r2);
    imprimirRetangulo(r3);


    return 0;
}