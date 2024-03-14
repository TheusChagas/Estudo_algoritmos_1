/*
Defina uma struct para triangulo equilatero, para qual deve conter o comprimento de cada
aresta. Em seguida, implemente func¸oes que atendam as seguintes especificações: ˜
a) - Area do triangulo. 
b) - Altura do triangulo. 
c) - Perímetro do triangulo.
*/

#include <stdio.h>
#include <math.h>

typedef struct triangulo{
    int lado;
}Triangulo;

Triangulo iniTri(int l){
    Triangulo x;
    x.lado = l;
    return x;
}
void areaTri(Triangulo x){
    double d;
    d = x.lado;
    printf("A area do triangulo eh: %.2lf\n\n", ((d*d)*sqrt(3))/4);
}
void altTri(Triangulo x){
    double d;
    d = x.lado;
    printf("A altura do triangulo eh: %2.lf\n\n", (d*sqrt(3))/2);
}
void perTri(Triangulo x){
    printf("O perimetro do triangulo eh: %d", x.lado*3);
}
int main(void){
    Triangulo a = {5};
    areaTri(a);
    altTri(a);
    perTri(a);

    return 0;
}