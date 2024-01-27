

#include <stdio.h>
#include <stdlib.h>

typedef enum // enum usado para indentificar o tipo do produto
{
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} tipp;


typedef struct
{
    char nome[50];
    float preco;
    tipp tipoProduto;
} Produto;

void lerDados(Produto *p)
{
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite o preco: ");
    scanf("%f", &(p->preco));

    printf("Digite o tipo [0] para alimento, [1] para bebida, [2] para eletronico: ");
    scanf("%d", &(p->tipoProduto));

}

void imprimirDados(Produto *p)
{
    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);

    switch (p->tipoProduto)
    {
    case ALIMENTO:
        printf("ALIMENTO\n");
        break;
    case BEBIDA:
        printf("BEBIDA\n");
        break;
    case ELETRONICO:
        printf("ELETRONICO\n");
        break;
    }
}

int main()
{
    Produto *produto = (Produto *)malloc(sizeof(Produto));

    lerDados(produto);
    imprimirDados(produto);

    free(produto);
    return 0;
}