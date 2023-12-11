#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[20];
    int idade;
    int mat;
    char email[50];
};  

// função para preencher 
void preencher(struct aluno * estudante){
    printf("Digite o nome do aluno: \n");
    scanf(" %[^\n]", estudante->nome);

    printf("Digite a idade: \n");
    scanf("%d", &estudante->idade);
    
    printf("Digite a matricula: \n");
    scanf("%d", &estudante->mat);

    printf("Digite o email: \n");
    scanf(" %[^\n]", estudante->email);
    system("cls");

};

void imprimir(struct  aluno * estudante){
    printf("nome: %s\n", estudante->nome);
    printf("idade: %d\n", estudante->idade);
    printf("matricula: %d\n", estudante->mat);
    printf("email: %s\n", estudante->email);
};


// alocação dinamica de struct pois a variavel agr é um ponteiro
int main(){
    struct aluno *estudante = (struct aluno*) malloc (sizeof(struct aluno));
    if( estudante == NULL){
        exit(1);
    }
    preencher(estudante);
    imprimir(estudante);
    
    free(estudante);

    return 0;
}
