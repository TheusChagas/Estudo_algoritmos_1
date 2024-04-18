#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct guerreiro{
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_jogador;
}Guerreiro;

int rolaDados(){
    return (rand()%16)+3;
}

void criaGuerreiro(Guerreiro *a){
    a->ataque = rolaDados();
    a->defesa = rolaDados();
    a->carisma = rolaDados();
    a->pontos_vida = rolaDados()+rolaDados()+rolaDados();
}

int bonusCarisma(int car){
    if(car <= 3){
        return -3;
    }
    else if(car >=4 && car <=5){
        return -2;
    }
    else if(car >=6 && car <=7){
        return -1;
    }
    else if(car >=14 && car <=15){
        return 1;
    }
    else if(car >=16 && car <=17){
        return 2;
    }
    else if(car >= 18){
        return 3;
    }
    else{
        return 0;
    }
}

void ataca(Guerreiro *a, Guerreiro *b){
    int golpe, escudo, dano;
    golpe = rolaDados()+rolaDados()+rolaDados() + a->ataque + bonusCarisma(a->carisma);
    escudo = rolaDados()+rolaDados()+rolaDados() + b->defesa + bonusCarisma(b->carisma);
    dano = golpe - escudo;
    if(dano > 0){
        b->pontos_vida = b->pontos_vida - dano;
    }
}