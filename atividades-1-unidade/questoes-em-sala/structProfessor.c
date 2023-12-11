#include <stdio.h>
#include <stdlib.h>

struct professor{
    char nome[20];
    int idade;
    int matri;
    char disciplina[10];
    char email[50];
    int telefone;
};

void preencher(struct professor * pro){
    printf("Digite o nome: \n");
    scanf(" %[^\n]", pro->nome);
    printf("Digite sua idade: \n");
    scanf("%d", &pro->idade);
    printf("Digite sua matricula: \n");
    scanf("%d", &pro->matri);
    printf("disciplina lecionada: ");
    scanf(" %[^\n]", pro->disciplina);
    printf("Digite seu email: ");
    scanf(" %[^\n]", pro->email);
    printf("Telefone para contato: ");
    scanf("%d", &pro->telefone);
    
}

void imprimir(struct professor * pro){
    printf("nome: %s\n", pro->nome);
    printf("idade: %d\n", pro->idade);
    printf("matricula: %d\n", pro->matri);
    printf("Disciplina: %s\n", pro->disciplina);
    printf("email: %s\n", pro->email);
    printf("Telefone: %d\n", pro->telefone);
}
 // declaração de struct dinâmica
int main(){
    struct professor * pro = (struct professor *) malloc(sizeof(struct professor));

    if(pro == NULL){
        exit(1);
    }
    preencher(pro);             // chamadas das funcões
    imprimir(pro);

    free(pro);

    return 0;

}