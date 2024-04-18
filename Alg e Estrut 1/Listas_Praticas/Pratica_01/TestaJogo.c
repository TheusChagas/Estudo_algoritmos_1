#include "Jogo.h"
int main(){
    srand(time(NULL));
    
    Guerreiro a;
    criaGuerreiro(&a);
    a.id_jogador = 1;
    printf("Guerreiro 1\nAtaque: %d\nDefesa: %d\nCarisma: %d\nVida: %d\n", a.ataque, a.defesa, a.carisma, a.pontos_vida);
    Guerreiro b;
    b.id_jogador = 2;
    criaGuerreiro(&b);
    printf("Guerreiro 2\nAtaque: %d\nDefesa: %d\nCarisma: %d\nVida: %d\n", b.ataque, b.defesa, b.carisma, b.pontos_vida);
    while(a.pontos_vida>0 || b.pontos_vida>0){
        ataca(&a, &b);
        if(b.pontos_vida <= 0){
            printf("O guerreiro %d venceu a batalha!\n", a.id_jogador);
            break;
        }
        ataca(&b, &a);
        if(a.pontos_vida <= 0){
            printf("O guerreiro %d venceu a batalha!\n", b.id_jogador);
            break;
        }
    }
    return 0;
}