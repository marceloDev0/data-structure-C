// lista 01 questão 2
#include <stdio.h>

int main() {
    // Abrir o arquivo de entrada para leitura
    FILE *entrada = fopen("entrada_.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Preencher um vetor de 10 inteiros a partir do arquivo
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        if (fscanf(entrada, "%d", &vetor[i]) != 1) {
            printf("Erro ao ler o arquivo de entrada");
            fclose(entrada);
            return 1;
        }
    }

    // Fechar o arquivo de entrada
    fclose(entrada);

    // Calcular o menor, o maior e a média dos elementos
    int menor = vetor[0];
    int maior = vetor[0];
    int soma = vetor[0];

    for (int i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        soma += vetor[i];
    }

    double media = (double)soma / 10;

    // Abrir o arquivo de saída para escrita
    FILE *saida = fopen("saida_.txt", "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        return 1;
    }

    // Escrever no arquivo de saída
    fprintf(saida, "Menor elemento: %d\n", menor);
    fprintf(saida, "Maior elemento: %d\n", maior);
    fprintf(saida, "Média dos elementos: %.2f\n", media);

    // Fechar o arquivo de saída
    fclose(saida);

    printf("Operação concluída com sucesso.\n");

    return 0;
}