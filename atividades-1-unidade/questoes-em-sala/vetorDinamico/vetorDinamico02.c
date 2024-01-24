#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 5, novo_tamanho, i;
    int *vetor = (int *) malloc(tamanho * sizeof(int));

    printf("\nNovo tamanho do vetor: ");
    scanf("%d", &novo_tamanho);

    vetor = (int *) realloc(vetor, novo_tamanho * sizeof(int)); // alterando o tamanho dos espaços reservados dinamicamente
    if(vetor == NULL){
        printf("Erro de alocação!");
        exit(1);
    }
    for(i = 0; i < novo_tamanho; i++){ // pedindo os valores do vetor ao usuário
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < novo_tamanho; i++){ // imprimindo esses valores
        printf("%d ", *(vetor + i));
    }

    free(vetor); // liberando espaço reservado

    return 0;
}