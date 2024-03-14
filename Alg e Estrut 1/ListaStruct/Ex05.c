/*O Sr. Yugi esta inconformado com a perda de suas mais cartas valiosas, que juntas, formam o ´
poderoso Exodia. Entao, ele decidiu criar um projeto para refazer cinco cartas: brac¸o direito, 
brac¸o esquerdo, perna esquerda, perna direita e cabec¸a. Para isso, primeiramente o Yugi deve
fazer uma estrutura para os membros: brac¸o, perna e cabec¸a. Em seguida, ele devera fazer ´
uma combinac¸ao para fazer a estrutura Exodia. Como o Yugi n ˜ ao sabe programar, ele precisa ˜
de ajuda de alunos(as) da disciplina ”Algoritmos e Estrutura de Dados I” para por em pratica ´
o seu ambicioso projeto. Para que voce possa ajudar o Yugi a dar in ˆ ´ıcio ao projeto, fac¸a:
a) - Desenvolva uma estrutura para representar brac¸o (independentemente de direita e esquerda). Nessa estrutura deve ter como parametro: descric¸ ˆ ao, valor de ataque e valor de ˜
defesa.
b) - Desenvolva uma estrutura para representar perna (independentemente de direita e esquerda). Nessa estrutura deve ter como parametro: descric¸ ˆ ao, valor de ataque e valor de ˜
defesa.
c) - Desenvolva uma estrutura para representar cabec¸a. Nessa estrutura deve ter como parametro: ˆ
descric¸ao, valor de ataque e valor de defesa. ˜
d) - Defina a estrutura Exodia, que deve conter como parametros: descric¸ ˆ ao, valor de ataque, ˜
valor de defesa, brac¸o direito, brac¸o esquerdo, perna direita e perna esquerda.
e) - Inicialize o Exodia com as seguintes condic¸oes: se ambos os brac¸os t ˜ em os mesmos ˆ
pontos de ataque e de defesa (isso vale para os brac¸os tambem), o poder de ataque e de ´
defesa do Exodia completo e infinito (INT ´ MAX1
), ou seja, a uniao dos membros foi ˜
bem sucedida. Caso cada tipo de membro possua um dos valores diferentes em seus
respectivos pares, o ataque e a defesa do Exodia sera a m ´ edia dos mesmos atributos entre ´
todos os membros, ou seja, a combinac¸ao foi falha. */
#include <stdio.h>

typedef struct parte{
    char descricao[100];
    int defesa;
    int ataque;
}Parte;
typedef struct exodia{
    Parte braco;
    Parte perna;
    Parte cabeca;
}Exodia;
Parte inicializarParte(){
    Parte x;
    printf("Informe o valor da defesa: ");
    scanf("%d", &x.defesa);
    printf("Informe o valor do ataque: ");
    scanf("%d", &x.ataque);
    fflush(stdin);
    printf("Informe a descricao: ");
    scanf("%[^\n]s", &x.descricao);
    fflush(stdin);
    return x;
}
int main(){
    printf("Braco direito:\n");
    Parte bracoDir = inicializarParte();
    printf("Braco esquerdo:\n");
    Parte bracoEsq = inicializarParte();
    printf("Perna direito:\n");
    Parte pernaDir = inicializarParte();
    printf("Perna esquerdo:\n");
    Parte pernaEsq = inicializarParte();
    printf("Cabeca:\n");
    Parte Cabeca = inicializarParte();

    Exodia a;
    a.cabeca.ataque = Cabeca.ataque;
    a.cabeca.defesa = Cabeca.defesa;
    if ((bracoDir.ataque==bracoEsq.ataque) && (bracoDir.defesa==bracoEsq.defesa))
    {
        a.braco.ataque = __INT_MAX__;
        a.braco.defesa = __INT_MAX__;
    }
    else
    {
        a.braco.ataque = (bracoDir.ataque+bracoEsq.ataque)/2;
        a.braco.defesa = (bracoDir.defesa+bracoEsq.defesa)/2;
    }
    if ((pernaDir.ataque==pernaDir.ataque) && (pernaDir.defesa==pernaEsq.defesa))
    {
        a.perna.ataque = __INT_MAX__;
        a.perna.defesa = __INT_MAX__;
    }
    else
    {
        a.perna.ataque = (pernaDir.ataque+pernaEsq.ataque)/2;
        a.perna.defesa = (pernaDir.defesa+pernaEsq.defesa)/2;
    }
    
    
    printf("Teste Exodia bracos:\n\nAtaque: %d\nDefesa: %d\n", a.braco.ataque, a.braco.defesa);
    printf("Teste Exodia perna:\n\nAtaque: %d\nDefesa: %d\n", a.perna.ataque, a.perna.defesa);
    
    return 0;
}

