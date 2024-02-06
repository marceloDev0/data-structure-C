#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    typedef struct frutas{
        char fruta[50];
        float preco;
    }fruta;

int main(){
    fruta f;
    setlocale(LC_ALL, "portuguese");
    char test;
    FILE * arquivo_entrada;
    if(arquivo_entrada == NULL){
        printf("erro ao abrir arquivo");
        exit(1);
    }
    arquivo_entrada = fopen("entradafrutas.txt", "aw");

    printf("====================\n");
    printf("BANCA DO SEU ANTOIN\n");
    printf("====================\n");

    do{
        printf("DIGITE O NOME DA FRUTA: ");
        scanf(" %[^\n]", f.fruta);
        printf("PRECO DA FRUTA: ");
        scanf("%f", &f.preco);
        fprintf(arquivo_entrada, "NOME DA FRUTA: %s\nPREÇO DA FRUTA: %.2f\n", f.fruta, f.preco);

        printf("%s , ADICIONADA COM SUCESSO\n", f.fruta);

        printf("ADICIONAR NOVA FRUTA? ");
        scanf(" %c", &test);
        

    }while(test == 'S' || test == 's');

    if(fclose(arquivo_entrada) == 0){
        printf("ARQUIVO FECHADO!!");
    }

    return 0;
}