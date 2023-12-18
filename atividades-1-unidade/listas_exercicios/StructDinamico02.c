#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct pes{
    char nome[50];
    int idade, RG;

}pessoa;

void preencher(pessoa *pes, int tamanho){
        printf("nome do %d° funcionario: ", tamanho+1);
        scanf(" %[^\n]", pes[tamanho].nome);
        printf("idade do %d° funcionario: ", tamanho+1);
        scanf("%d", &pes[tamanho].idade);
        printf("Documento do %d° funcionario: ", tamanho+1);
        scanf("%d", &pes[tamanho].RG);
    
}

void imprimir(pessoa * pes, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("nome do %d° funcionario: %s\n",i+1, pes[i].nome);
        printf("idade do %d° funcionario: %d\n",i+1, pes[i].idade);
        printf("Documento do %d° funcionario: %d\n",i+1, pes[i].RG);
        printf("--------------------------------------------------\n");
    }

}

void mudarIdade(pessoa * pes, int tamanho){
    int i, doc;
    char alterar;

    printf("Alterar alguma idade S / N: ");
    scanf(" %c", &alterar);
    if(alterar  == 's' || alterar == 'S'){
        printf("Nome e documento de todos os funcionarios:\n");
        for(i =0; i < tamanho; i++){
            printf("nome: %s\nDocumento: %d\n", pes[i].nome, pes[i].RG);

        }
        printf("informe o numero do documento de desejar alterar idade: ");
        scanf("%d", &doc);

        for(i = 0; i < tamanho; i++){
            if(doc == pes[i].RG){
                printf("Digite a nova idade: ");
                scanf("%d", &pes[i].idade);
                break;
            }
        }
    }
    system("cls");
}

void velhoNovo(pessoa * pes, int tamanho){
    int pos1 = 0, pos2 = 0, i;
    int nv = pes[0].idade, vlh = pes[0].idade;     
    
    for (i = 0; i < tamanho; i++){
        if (nv > pes[i].idade){
            nv = pes[i].idade;
            pos2 = i;
        }
        if (vlh < pes[i].idade){
            vlh = pes[i].idade;
            pos1 = i;
        }
        if(nv == pes[i].idade && vlh == pes[i].idade){
            pos1 =i;
            pos2 = i;
        }
    }
    printf("Pessoa mais nova:\nNome: %s\nIdade: %d\n\n", pes[pos2].nome, pes[pos2].idade);
    printf("Pessoa mais velha:\nNome: %s\nIdade: %d\n\n", pes[pos1].nome, pes[pos1].idade);
}


int main(void){
    setlocale(LC_ALL, "portuguese");
    char adicionar;
    int quantidade = 0;
    pessoa * pess = (pessoa *) malloc(sizeof(pessoa));
    if(pess == NULL){
        exit(1);
    }
    do{
        printf("Adicionar Funcionario? [SIM/ NAO]\n");
        scanf(" %c", &adicionar);

        if(adicionar == 's' || adicionar == 'S'){
            pess = (pessoa*) realloc(pess, (quantidade +1) * sizeof(pessoa));
            if(pess == NULL){
                exit(1);
            }

            preencher(pess, quantidade);
            quantidade++;

    
        }else{
            break;
        }

    }while(adicionar != 'n' || adicionar != 'N');
    system("cls");
    
    mudarIdade(pess, quantidade);

    imprimir(pess, quantidade);

    velhoNovo(pess, quantidade);

    free(pess);

    return 0;
