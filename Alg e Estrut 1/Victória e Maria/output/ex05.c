#include <stdio.h>

struct braco
{
    int ataque;
    int defesa;
    char descricao[40];
};
struct perna
{
    int ataque;
    int defesa;
    char descricao[40];
};
struct cabeca
{
    int ataque;
    int defesa;
    char descricao[40];
};
struct exodia
{
    int ataque;
    int defesa;
    char descricao[40];
    struct perna direita;
    struct perna esquerda;
    struct braco direito;
    struct braco esquerdo;
    struct cabeca;
};
void inicializExodia(struct exodia x)
{
    if(x.direito.ataque == x.esquerdo.ataque)
    {
        printf("teste");
    }
}

int main()
{
    struct 
    inicializExodia();

    return 0;
}