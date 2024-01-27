#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union tipos{
    char alimento[10];
    char bebida[10];
    char eletro[10];
}tipos;

typedef struct produtos{
    char nome[20];
    float preco;
    tipos tipo;
}produto;

void preencher_dados(produto * p){
    int opc;
    printf("Nome do produto: ");
    scanf(" %[^\n]", p->nome);
    printf("preço do produto: ");
    scanf("%f", &p->preco);
    printf("[1] FRUTA\n[2] BEBIDA\n[3] ELETRÔNICO\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        strcpy(p->tipo.alimento, "ALIMENTO");    
        break;
    case 2:
        strcpy(p->tipo.bebida, "BEBIDA");
        break;
    case 3:
        strcpy(p->tipo.eletro, "ELETRÔNICO");
        break;    
    default:
        printf("PRODUTO NÃO INDENTIFICADO");
        break;
    }
}

void imprimirdados(produto * p){
    printf("Nome:\t%s\n", p->nome);
    printf("preço:\t%.2f\n", p->preco);
    printf("Tipo:\t%s\n", p->tipo.alimento);
}

int main(void){
    produto * produ = malloc(sizeof(produto));
    preencher_dados(produ);
    system("cls");
    imprimirdados(produ);
    free(produ);

}