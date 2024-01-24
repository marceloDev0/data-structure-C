#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 5, i;
    int *vetor = (int *) malloc(tamanho *sizeof(int)); // reservando espaço dimanicamente
    if(vetor == NULL){
        exit(1); // aborta a execução do programa
    }else{
        printf("Alocação feita\n");
    }
    // digite os valores do vetor
    for(i =0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    // imprimir os valores do vetor
    for(i =0; i <tamanho; i++){
        printf("%d ", *(vetor + i));
    }
    free(vetor);
}