#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union dadosp{
    char fem[10];
    char mas[10];
}dadosp;

typedef struct dados{
    char nome[50];
    int idade;
    dadosp dados_p;

}dados;

void dados_pessoas(dados *p){
    int opc;
    printf("Digite seu nome: ");
    scanf(" %[^\n]", p->nome);
    printf("Digite sua idade: ");
    scanf("%d", &p->idade);
    printf("[1] para sexo feminino\t[2] para sexo masculino: ");
    scanf("%d", &opc);
    if(opc == 1){
        strcpy(p->dados_p.fem, "feminino");
    }else{
        strcpy(p->dados_p.mas, "masculino");
    }
}
void imprimirdados(dados * p){
    printf("nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    printf("Genero: %s\n", p->dados_p.fem);
}

int main(void){
    dados * pessoas = malloc(sizeof(dados));
    dados_pessoas(pessoas);
    imprimirdados(pessoas);
    free(pessoas);
}