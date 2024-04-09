//Abandon all hope, ye who enter here.
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

typedef struct cadastro{
    char nome[30];
    int RA;
    float coef;
}Cadastro;

int main(void){
    Cadastro a[10];

    int i=0;
    char resp={'N'};
    for (i = 0; i < 5; i++){
        fflush(stdin);
        printf("Informe o nome do Aluno %d: ", i+1);
        scanf("%[^\n]s", a[i].nome);
        fflush(stdin);
        printf("Informe o RA do Aluno %d: ", i+1);
        scanf("%d", &a[i].RA);
        printf("Informe o coeficiente do Aluno %d: ", i+1);
        scanf("%f", &a[i].coef);
    }

    do{
    fflush(stdin);
    printf("\nQual dado deseja conferir?:\nNome(N)\nRA(R)\nCoeficiente(C)\nSair(P)\n");
    scanf("%c", &resp);
    fflush(stdin);
    resp  = toupper(resp);
    switch (resp)
    {
    case 'N':
    printf("Nome dos alunos no sistema: \n");
        for (i = 0; i < 5; i++){
        printf("%s -", a[i].nome);
    }
        break;
    case 'R':
    printf("RA dos alunos no sistema: \n");
        for (i = 0; i < 5; i++){
        printf("%d -", a[i].RA);
    }
        break;
    case 'C':
    printf("Coeficiente dos alunos no sistema: \n");
        for (i = 0; i < 5; i++){
        printf("%.2f -", a[i].coef);
    }
        break;

    default:
        break;
    }
    }while(resp!= 'P');
    for (i = 0; i < 5; i++){
        printf("%s - %d - %f\n", a[i].nome, a[i].RA, a[i].coef);
    }

    return 0;
}

