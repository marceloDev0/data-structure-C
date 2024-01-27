#include <stdio.h>
#include <stdlib.h>

typedef enum Genero{
    MASCULINO, FEMININO
}genero;

typedef struct pessoas{
    char nome[30];
    int idade;
    genero gen;
}pessoa;

void lerdados(pessoa * p){
    printf("Digite seu nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite sua idade: ");
    scanf("%d", &p->idade);
    printf("Digite [0] PARA MASCULINO [1] PARA FEMININO: ");
    scanf("%u", &p->gen);
}

void imprimir(pessoa * p){
    printf("Nome:\t %s\n",p->nome);
    printf("Idade:\t %d\n", p->idade);
    printf("sexo:\t");
    switch (p->gen)
    {
    case MASCULINO:
        printf("Masculino\n");
        break;
    case FEMININO:
        printf("Feminino\n");
        break;
    default:
        printf("Opção Inválida");
        break;
    }
}

int main(){
    pessoa * person = malloc(sizeof(pessoa));
    if(person == NULL){
        exit(1);
    }

    lerdados(person);
    imprimir(person);

    free(person);
}