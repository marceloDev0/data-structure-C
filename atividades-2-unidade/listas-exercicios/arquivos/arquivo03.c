// lista 02 questão 01

#include <stdio.h>
#include <stdlib.h>

typedef struct fun{
    int id;
    char nome[30];
    float salario;
}funcionario;

void preenche(funcionario *fun, int opc){
    for(int i = 0; i < opc; i++){
        printf("id: ");
        scanf("%d", &fun[i].id);
        printf("nome: ");
        scanf("%s", fun[i].nome);
        printf("salario: ");
        scanf("%f", &fun[i].salario);
    }
}

void imprimirarquivo(funcionario *fun, int opc){
    FILE *arq;
    arq = fopen("funcionarios.txt", "w");
    if(arq == NULL){
        printf("erro ao abrir o arquivo");
        exit(1);
    }
    for(int i = 0; i < opc; i++){
        fprintf(arq, "%d\t\t%s\t%.2f\n", fun[i].id, fun[i].nome, fun[i].salario);
    }
    fclose(arq);
}
int main(){
    int opc;
    printf("quantos funcionarios? ");
    scanf("%d", &opc);
    funcionario *fun = (funcionario *) malloc(opc * sizeof(funcionario));
    preenche(fun, opc);
    imprimirarquivo(fun, opc);
    free(fun);

}