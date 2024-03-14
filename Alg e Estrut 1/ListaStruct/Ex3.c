/*
Defina uma struct para retangulo, para qual deve conter o comprimento de cada aresta. Em
seguida, implemente funçoes que atendam as seguintes especificações: 
a) - Inicializar a estrutura.
b) - Instanciar a estrutura.
c) - Imprimir o conteudo da estrutura. 
d) - Area do retangulo.
e) - Uma funçao que receba dois retangulos e retorne um terceiro com a soma das arestas.
*/
#include <stdio.h>

typedef struct retangulo{
    int altura;
    int largura;
}Retangulo;

Retangulo iniRet(){
    Retangulo x;
    printf("Defina a altura: ");
    scanf("%d", &x.altura);
    printf("Defina a largura: ");
    scanf("%d", &x.largura);
    printf("\n");
    return x;
}
Retangulo instanciarStruct(Retangulo x){
    Retangulo a;
    a.altura = x.altura;
    a.largura = x.largura;
    return a;
}
void imprimirStruct(Retangulo x){
    printf("Altura do retangulo: %d\n", x.altura);
    printf("Largura do retangulo: %d\n\n", x.largura);
}
void areaRet(Retangulo x){
    printf("A area do retangulo eh: %d\n\n", x.altura*x.largura);
}
Retangulo somaAresta(Retangulo x, Retangulo y){
    Retangulo z;
    z.altura = x.altura + y.altura;
    z.largura = x.largura + y.largura;
    return z;
}

int main(void){
    Retangulo a = {5, 10};
    Retangulo b = iniRet();

    imprimirStruct(a);
    imprimirStruct(b);
    areaRet(a);
    areaRet(b);
    Retangulo c = somaAresta(a, b);
    imprimirStruct(c);

    Retangulo d = instanciarStruct(c);
    imprimirStruct(d);

    return 0;
}