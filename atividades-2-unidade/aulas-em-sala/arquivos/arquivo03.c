#include <stdio.h>
#include <stdlib.h>

int main(){
    // cria o arquivo 
    FILE * fp = fopen("entrada03.txt", "w");
    if(fp == NULL){
        exit(1);
    }else{
        printf("arquivo aberto");
    }

    fputc('A', fp); // ler apenas um caractere
    fputs(" marcelo", fp); // ler varios caracteres
    fprintf(fp, " Bonito!"); // mesma função do fputs
    fclose(fp); // fecha arquivo
    return 0;

}