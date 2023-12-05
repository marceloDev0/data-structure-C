#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor = (int *) malloc(3 * sizeof(int)); // aloca��o din�mica,  malloc usado para reserva o espa�o de mem�ria retornar endere�os
                                                 // (int *) usado para for�a que o valor retornado no malloc seja de fato o que eu quero
    if(vetor == NULL){
        printf("Erro na aloca�a�");                // calloc inicializa a posi��o do vetor com 0; retornar um endere�o tbm
        exit(1);
    }else{
        printf("aloca��o feita corretamente");
    }
    free(vetor); // liberar a mem�ria alocada
    return 0;