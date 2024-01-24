#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor = (int *) malloc(3 * sizeof(int)); // alocação dinâmica,  malloc usado para reserva o espaço de memória retornar endereços
                                                 // (int *) usado para força que o valor retornado no malloc seja de fato o que eu quero
    if(vetor == NULL){
        printf("Erro na alocaçaõ");                // calloc inicializa a posição do vetor com 0; retornar um endereço tbm
        exit(1);
    }else{
        printf("alocação feita corretamente");
    }
    free(vetor); // liberar a memória alocada
    return 0;