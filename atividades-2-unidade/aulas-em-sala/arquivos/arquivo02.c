#include <stdio.h>
#include <stdlib.h> 

int main(){
    // cria o arquivo entrada.txt
    FILE* fp = fopen("entrada.txt", "rt");
    char c[20];
    if(fp == NULL){
        printf("Erro na abertura do arquivo\n"); // vereficação da memória
        exit(1);
    }else{
        printf("Arquivo foi gerado com sucesso\n");
    }
    fscanf(fp, "%s", c); // ler dados do arquivo
    printf("%s\n", c); // imprimi a string lida

    if(fclose(fp)){
        printf("Arquivo fechado...");
    }
    return 0;
}