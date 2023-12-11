#include <stdio.h>
#include <stdlib.h>

struct funcio{
    char nome[20];
    int idade;
    int CPF;
    char emprego[25];
    float salario;
    char email[50];
    int telefo;
};

void preencher(struct funcio *funcionario){
    printf("nome: ");
    scanf(" %[^\n]", funcionario->nome);
    printf("idade: ");
    scanf("%d", &funcionario->idade);
    printf("CPF: ");
    scanf("%d", &funcionario->CPF);
    printf("profiss�o: ");
    scanf(" %[^\n]", funcionario->emprego);
    printf("salario: ");
    scanf("%f", &funcionario->salario);
    printf("email: ");
    scanf(" %[^\n]", funcionario->email);
    printf("Digite seu telefone: ");
    scanf("%d", &funcionario->telefo);
}

void imprimir(struct funcio *funcionario){
    printf("Nome do funcion�rio: %s\n",funcionario->nome);
    printf("idade do funcion�rio: %d\n", funcionario->idade);
    printf("CPF do funcion�rio: %d\n", funcionario->CPF);
    printf("sal�rio do funcion�rio: %.2f\n", funcionario->salario);
    printf("email do funcion�rio: %s\n", funcionario->email);
    printf("Telefone para contato: %d\n", funcionario->telefo);
    
    printf("\n");
}


int main(){
    struct funcio * funcionario = (struct funcio *) malloc(sizeof(struct funcio));
    if(funcionario == NULL){
        exit(1);
    }
    preencher(funcionario);
    imprimir(funcionario);

    free(funcionario);

    return 0;

}