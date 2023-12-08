#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int numeroq, i, j, aprovados = 0;
    printf("Quantidade de questões: ");
    scanf("%d", &numeroq);
    // declaração do ponteiro
    char *gabarito = (char *) malloc(numeroq * sizeof(char));

    printf("leitura do gabarito: ");
    scanf("%s", gabarito);
    // declaracão do vetor de ponteiro para ponteiro
    char **respostas = (char **) malloc(10 * sizeof(char *));
    for(int i =0; i <10; i++){
        respostas[i] = (char *) malloc(numeroq * sizeof(char));
    }
    // leitura das respostas dos alunos
    for( i =0; i < 10; i++){

        printf("Digite as repostas do aluno %d: ", i +1);
        scanf("%s", respostas[i]);
    }
    // calculando notas dos alunos
    for(i = 0; i < 10; i++){
        float nota = 0.0;
        for(j =0; j < 10; j++){
            if(respostas[i][j] == gabarito[j]){
                nota += 10/numeroq;
            }
        }
        printf("nota do aluno %d: %.2f\n", i+1, nota);
        if(nota >= 6.0){
            aprovados++;
        }
    }
    // mostrando quantidade de aprovados
    float porcentagemAp = aprovados*100 / 10;
    printf("Porcentagem de aprovação: %.2f%%\n", porcentagemAp);

    // liberando memória alocada

    for(i =0; i < 10; i++){
        free(respostas[i]);
    }
    free(respostas);
    free(gabarito);

    return 0;
}