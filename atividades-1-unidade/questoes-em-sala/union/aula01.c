#include <stdio.h>
#include <stdlib.h>

typedef union documentos{ //union server para armazenar apenas um valor escolhido
    char rg[15];
    char cpf[15];
}documentos;

typedef struct pessoas{
    char nome[20];
    int idade;
    documentos doc;
}pessoa;

void dados_pessoas(pessoa *p){
    int opc;
    printf("Informe o nome:");
    scanf(" %[^\n]", p->nome);
    printf("\nInforme a idade: ");
    scanf("%d", &p->idade);
    printf("\ninforme 1 para [CPF]\tInforme 2 para [RG]: ");
    scanf("%d", &opc);
    if (opc == 1){
        printf("digite o seu cpf");
        scanf(" %[^\n]s", &p->doc.cpf);
    }else{
        printf("digite o seu rg");
        scanf(" %[^\n]s", &p->doc.rg);
    }
    
}

int main(void){
    pessoa * pessoa = malloc(sizeof(pessoa));
    dados_pessoas(pessoa);   
    free(pessoa);
    return 0;
}