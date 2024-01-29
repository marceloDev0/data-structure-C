#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    int nlinhas = 0;
    FILE *fp;
    // abre o arquivo para leitura
    fp = fopen("entrada.txt", "rt");
    if(fp == NULL){
        printf("nao foi possivel abrir arquivo.\n");
        return 1;
    }
    //lê caractere a caractere
    while((c = fgetc(fp)) != EOF){
        if(c=='\n'){
            nlinhas++; // contador de linhas 
        }
    }
    //feche arquivo
    fclose(fp);
    //exibe resultado na tela
    printf("numero de linhas = %d\n", nlinhas);

    return 0;
}