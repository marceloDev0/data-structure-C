#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char * nome = (char *) malloc(50*sizeof(char)); // inicializando o vetor com um espa�o din�mico de 50 vezes um tamanho de um char 
                                                    // (char *) usada para for�a que de fato o espa�o reservado seja do tipo string/caractere
    if(nome == NULL){
        exit(1);
    }
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);

    nome = realloc(nome, strlen(nome) * sizeof(int)); // alterando o tamanho do vetor de char com base no tamanho do nome
                                                    // usando a fun��o strlen para conta a quantidade de caracteres do nome
    printf("%s\n", nome);
    printf("%d", strlen(nome)); // utilizado somente para visualizar o tamanho do vetor de char realocado
    free(nome);

    return 0;
}