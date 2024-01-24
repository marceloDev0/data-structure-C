#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[20];
    int idade;
    int mat;
    char email[50];

}; 

int main(){
    struct aluno aluno;
    
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", aluno.nome);

    printf("Digite a idade: \n");
    scanf("%d", &aluno.idade);
    
    printf("Digite a matricula: \n");
    scanf("%d", &aluno.mat);

    printf("Digite o email: \n");
    scanf(" %[^\n]", aluno.email);

    printf("nome: %s", aluno.nome);
    printf("idade: %d", aluno.idade);
    printf("matricula: %d", aluno.mat);
    printf("email: %s", aluno.email);

    return 0; 
    
}