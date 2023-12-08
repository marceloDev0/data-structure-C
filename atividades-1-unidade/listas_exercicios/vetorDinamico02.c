#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int N = 0;
    float porcfem;
    float porcmas;
    char *sexo = (char *) malloc(100 * sizeof(char)); // aloca��o feita
    char *opiniao = (char *) malloc(100 * sizeof(char));
    int homens =0, mulheres =0;
    char continu;
    do{
        printf("Qual o seu sexo? [M/F]\n");
        scanf(" %c", &sexo[N]);
        fflush(stdin);
        printf("Gostou ou n�o do produto? [S/N]\n");
        scanf(" %c", &opiniao[N]);
        fflush(stdin);
        N++; // contador de numeros de entrevistados

        sexo = (char *) realloc(sexo, N * sizeof(char)); // realocando a mem�ria de acordo com o total de entrevistados
        opiniao = (char *) realloc(opiniao, N * sizeof(char));

        if(sexo == NULL || opiniao == NULL){ // caso n�o tenha espa�o para aloca��o a mem�ria e liberada 
            printf("erro de aloca��o");
            free(sexo);
            free(opiniao);
            exit(1);
        }

        printf("continuar pesquisar? [S/N]\n"); // repons�vel pela repeti��o do la�o
        scanf(" %c", &continu);
        system("cls");


   
    }while(continu == 'S' || continu == 's'); // testando condi��o 
    int i;
    // testando se o entrevistado � mulher
    for(i =0; i < N; i++){
        if(sexo[i] == 'f' && opiniao[i] == 's'){
            mulheres += 1;
        }
    }
    // testando se o entrevistado � homem
    for(i =0; i < N; i++){
        if(sexo[i] == 'm' && opiniao[i] == 'n'){
            homens += 1;
        }
    }
    // calculando a porcentagem de homens e mulheres
    porcfem = mulheres * 100 / N; 
    porcmas = homens * 100 / N;
    printf("quantidade de pessoas entrevistadas: %d\n", N);
    printf("porcentagem de mulheres que gostaram do produto: %.2f%%\n", porcfem);
    printf("porcentagem de homens que n�o gostaram do produto: %.2f%%\n", porcmas);

    // liberando mem�ria alocada
    free(sexo);
    free(opiniao);

    return 0;

}