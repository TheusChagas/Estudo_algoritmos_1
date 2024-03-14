#include <stdio.h>
#include <math.h>

struct trianguloEquilatero{
    int aresta;
};

void areaTriangulo(struct trianguloEquilatero x)
{
    //double d;
    //d = x.aresta;
    printf("Area: %lf\n", (pow(x.aresta,2)*sqrt(3))/4);
}

void alturaTriangulo(struct trianguloEquilatero x)
{
    printf("Altura: %lf\n", (sqrt(3)*x.aresta)/2);
}

void perimetroTriangulo (struct trianguloEquilatero x)
{
    printf("Perimetro: %d\n", 3*x.aresta);
}

int main()
{
    struct trianguloEquilatero triangulo = {5};
    areaTriangulo(triangulo);
    alturaTriangulo(triangulo);
    perimetroTriangulo (triangulo);

    return 0;
}