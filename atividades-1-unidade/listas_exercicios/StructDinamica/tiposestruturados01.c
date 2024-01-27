#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso {
    float preco;
    char local[25];
    char atracao[25];
} ingressos;

void preencher(ingressos *i, int n);
void imprimir(ingressos *i, int n);
void altera_preco(ingressos *i, float valor, int n);
void imprime_menor_maior_preco(int n, ingressos* vet);


int main(void) {
    float nv_valor;
    int quant, num_ingresso;
    printf("Quantidade de ingressos: ");
    scanf("%d", &quant);

    ingressos *ingresso = (ingressos *)malloc(quant * sizeof(ingressos));
    if (ingresso == NULL) {
        exit(1);
    }

    preencher(ingresso, quant);
    imprimir(ingresso, quant);
    while(quant > 0){
    printf("Desejar Alterar o valor de qual ingresso [999] PARA NAO ALTERAR NENHUM: ");
    scanf("%d", &num_ingresso);
    if(num_ingresso == 999){
        break;
    }
    printf("Alterar valor do ingresso #%d: ", num_ingresso);
    scanf("%f", &nv_valor);
    altera_preco(ingresso, nv_valor, num_ingresso);
    }

    imprime_menor_maior_preco(quant, ingresso);

    free(ingresso); // Libera a memória alocada dinamicamente
    return 0;
}

void preencher(ingressos *i, int n) {
    int j;
    for (j = 0; j < n; j++) {
        printf("Digite o preco do ingresso #%d: ", j + 1);
        scanf("%f", &i[j].preco);
        printf("Digite o local: ");
        scanf(" %[^\n]", i[j].local);
        printf("Digite a atracao: ");
        scanf(" %[^\n]", i[j].atracao);
        system("cls");
    }
}

void imprimir(ingressos *i, int n) {
    int j;
    for (j = 0; j < n; j++) {
        printf("Preco do ingresso #%d: ", j + 1);
        printf("Preco: %.2f\n", i[j].preco);
        printf("Local: %s\n", i[j].local);
        printf("Atracao: %s\n", i[j].atracao);
    }
}

void altera_preco(ingressos *i, float valor, int n) {
    int j;
    n--;
    for (j = 0; j < 1; j++){ // Modifica apenas o primeiro ingresso, pode ajustar conforme necessário
        i[n].preco = valor;
        printf("Novo valor do ingresso: %.2f\n", i[n].preco);
        printf("Local: %s\n", i[n].local);
        printf("Atracao: %s\n", i[n].atracao);
    }
}

void imprime_menor_maior_preco(int n, ingressos *vet) {
    int menorIndex = 0, maiorIndex = 0;
    float menor = vet[0].preco, maior = vet[0].preco;

    for (int i = 1; i < n; i++)
    {
        if (vet[i].preco < menor)
        {
            menor = vet[i].preco;
            menorIndex = i;
        }
        if (vet[i].preco > maior)
        {
            maior = vet[i].preco;
            maiorIndex = i;
        }
    }

    printf("\nIngresso mais barato:\nPreco: %.2f\nLocal: %s\nAtracao: %s\n", vet[menorIndex].preco, vet[menorIndex].local, vet[menorIndex].atracao);
    printf("\nIngresso mais caro:\nPreco: %.2f\nLocal: %s\nAtracao: %s\n", vet[maiorIndex].preco, vet[maiorIndex].local, vet[maiorIndex].atracao);
}


