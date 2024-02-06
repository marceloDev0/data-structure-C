#include <stdio.h>

typedef struct {
    char nome[50];
    float nota[3];
    float media;
} Aluno;

int main() {
    FILE *arquivo;
    int n, i;
    Aluno alunos[100];

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f %f %f", &alunos[i].nota[0], &alunos[i].nota[1], &alunos[i].nota[2]);
        alunos[i].media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2])/3;
    }

    arquivo = fopen("alunos.txt", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        fprintf(arquivo, "Nome: %s,\tNotas: %.1f\t%.1f\t%.1f,\tmedia: %.2f\n", alunos[i].nome, alunos[i].nota[0], alunos[i].nota[1], alunos[i].nota[2], alunos[i].media);
    }

    fclose(arquivo);

    return 0;
}