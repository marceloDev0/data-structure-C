#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNO 50

typedef struct alunos
{
    int matricula;
    char nome[80];
    char turma[10];
    float notas[3];
    float media;
} aluno;

void matricula(int n, aluno **alunos)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nome do aluno #%d: ", i+1);
        scanf(" %[^\n]", alunos[i]->nome);
        printf("Matricula do aluno #%d: ", i+1);
        scanf("%d", &alunos[i]->matricula);
        printf("turma: ");
        scanf(" %[^\n]", alunos[i]->turma);
        printf("Primeira nota: ");
        scanf("%f", &alunos[i]->notas[0]);
        printf("Segunda nota: ");
        scanf("%f", &alunos[i]->notas[1]);
        printf("Terceira nota: ");
        scanf("%f", &alunos[i]->notas[2]);
        alunos[i]->media = (alunos[i]->notas[0] + alunos[i]->notas[1] + alunos[i]->notas[2]) / 3;
    }
}

void lanca_notas(int n, aluno **alunos)
{
    int i;
    printf("\n    >>>> NOTAS <<<<   \n");
    for (i = 0; i < n; i++)
    {
        printf("Aluno #%d", i+1);
        printf("\nPrimeira unidade: %.2f\n", alunos[i]->notas[0]);
        printf("Segunda unidade: %.2f\n", alunos[i]->notas[1]);
        printf("Terceira unidade: %.2f\n", alunos[i]->notas[2]);
        printf("Media: %.2f", alunos[i]->media);
    }
}

void imprime_tudo(int n, aluno **alunos){
    int i;
    for(i =0; i < n; i++){
        printf("DADOS DO ALUNO #%d\n", i+1);
        printf("Nome: %s\n", alunos[i]->nome);
        printf("Matricula: %d\n", alunos[i]->matricula);
        printf("Turma: %s\n", alunos[i]->turma);

    }
}

void imprime_turma(int n, aluno **alunos, char *turma)
{
    int i;
    printf("\nDados dos alunos da turma %s \n", turma);
    for (i = 0; i < n; i++)
    {
        if (strcmp(alunos[i]->turma, turma) == 0)
        {
            printf("\n\t Aluno #%d \n", i+1);
            printf("Nome: %s\n", alunos[i]->nome);
            printf("Matricula: %d\n", alunos[i]->matricula);
            printf("Turma: %s\n", alunos[i]->turma);
            printf("Notas 1: %.2f\nNota 2: %.2f \nNota 3: %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
            printf("Media: %f", alunos[i]->media);
            printf("\n");
        }
    }
}

void imprime_turma_aprovados(int n, aluno **alunos, char *turma)
{
    int i;
    printf("\n>>> ALUNOS APROVADOS TURMA %s <<<\n", turma);
    for (i = 0; i < n; i++)
    {
        if (strcmp(alunos[i]->turma, turma) == 0)
        {
            if (alunos[i]->media >= 7.0)
            {
                printf("Nome: %s\n", alunos[i]->nome);
                printf("Matricula: %d\n", alunos[i]->matricula);
                printf("Turma: %s\n", alunos[i]->turma);
                printf("Notas 1: %.2f\nNota 2: %.2f \nNota 3: %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
                printf("Media: %.2f\n", alunos[i]->media);
            }
        }
    }
    printf("\n");
    printf(">>> ALUNOS REPROVADOS TURMA %s <<<\n", turma);
    for (i = 0; i < n; i++)
    {
        if (strcmp(alunos[i]->turma, turma) == 0)
        {
            if (alunos[i]->media < 7.0)
            {
                printf("Nome: %s\n", alunos[i]->nome);
                printf("Matricula: %d\n", alunos[i]->matricula);
                printf("Turma: %s\n", alunos[i]->turma);
                printf("Notas 1: %.2f\nNota 2: %.2f \nNota 3: %.2f\n", alunos[i]->notas[0], alunos[i]->notas[1], alunos[i]->notas[2]);
                printf("Media: %.2f\n", alunos[i]->media);
            }
        }
    }
}

int main(void){
    int i, quant, opc, res;
    char turma[10];
    printf("Quantidade de vagas disponiveis: ");
    scanf("%d", &quant);
    aluno **Aluno = (aluno **)malloc(MAX_ALUNO * sizeof(aluno *));
    for(i =0; i < quant; i++){
        Aluno[i] = malloc(quant * sizeof(Aluno));
    }
    if(Aluno == NULL ){
        exit(1);
    }

    do
    {
        printf("\n----------------------\n");
        printf("[1]- Fazer matricula\n");
        printf("[2]- Ver notas\n");
        printf("[3]- Ver todos os dados\n");
        printf("[4]- Dados de uma turma\n");
        printf("[5]- Ver aprovados\n");
        printf("[6]- sair do programa\n");
        printf("----------------------\n");
        printf("Informe a opcao: ");
        fflush(stdin);
        scanf("%d", &opc);
        system("cls");

        switch(opc){
        case 1:
            matricula(quant, Aluno);
            break;
        case 2:
            lanca_notas(quant, Aluno);
            break;
        case 3:
            imprime_tudo(quant, Aluno);
            break;
        case 4:
            printf("Qual turma desejar ver notas: ");
            scanf(" %[^\n]", turma);
            imprime_turma(quant, Aluno, turma);
            break;
        case 5:
            printf("Qual turma desejar ver alunos aprovados: ");
            scanf(" %[^\n]", turma);
            imprime_turma_aprovados(quant, Aluno, turma);
            break;
        case 6:
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }
        printf("\nDeseja escolher outrar opcao?\n[1]-Sim\n[2]-Nao: ");
        scanf("%d", &res);
    }while (res== 1);
    free(Aluno);
    for(i =0; i < quant; i++){
        free(Aluno[i]);
    }

    return 0;
}
