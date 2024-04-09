#include "EstudoTAD.h"

int main(void){

float d;
printf("\nTeste funcao 'Criar'\n");
Ponto *p1 = criar(15, 25);
printf("\tPonto 1 ->%.2f e %.2f\n", p1->x, p1->y);
printf("\tTamanho de p1: %ld\n", sizeof(p1));
Ponto *p2 = criar(18, 9);
printf("\tPonto 2 ->%.2f e %.2f\n", p2->x, p2->y);

printf("\nTeste funcao 'Alterar'\n");
alterar(p1, 10, 20);
printf("\tPonto 1 ->%.2f e %.2f\n", p1->x, p1->y);
printf("\tNovo ponto 1 ->%.2f e %.2f\n", p1->x, p1->y);

printf("\nTeste funcao 'distancia'\n"); //Corrigir no windows função sqrt da math.h na função
d = distancia(p1, p2);
printf("\tdistancia entre pontos: %.2f\n", d);

printf("\nTeste funcao 'acessar'\n");
Ponto *p3 = criar(0, 0);
acessar(p1, &p3->x, &p3->y);
printf("\tPonto 3 ->%.2f e %.2f\n", p3->x, p3->y);
alterar(p3, 32, 18);

printf("\nTeste funcao 'Imprimir_ponto'\n"); //Descobrir como imprimir qual ponto esta sendo enviado
imprimir_ponto(p1);
imprimir_ponto(p2);
imprimir_ponto(p3);

return 0;
}