//aula 29/01

#include <stdio.h>
#include <stdlib.h>

int main(){
    // cria o arquivo: entrada.txt no modo wt
    FILE* fp = fopen("entrada.txt", "rt");
    char c[20];
    if(fp == NULL){
        printf("Erro na abertura do arquivo\n"); // vereficação da memória
        exit(1);
    }else{
        printf("Arquivo foi gerado com sucesso\n");
    }
    fgets(c, 20, fp); // faz a leitura de dados armazenados no arquivo
    printf("%s\n", c); // mostrar dados armazenados no arquivo

    if(fclose(fp)){
        printf("Arquivo fechado com sucesso");
    } // fecha o arquivo criado
    return 0;
}