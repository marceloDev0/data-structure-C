#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct funcionario{
    char nome[50];
    float salario;
    int indentificador;
    char cargo[20];
}funcio;

void preencher(funcio *funcionario){
    printf("nome: ");
    scanf(" %[^\n]", funcionario->nome);
    printf("salario: ");
    scanf("%f", &funcionario->salario);
    printf("indentificador: ");
    scanf("%d", &funcionario->indentificador);
    printf("cargo: ");
    scanf(" %[^\n]", funcionario->cargo);

    
}
void imprimir(funcio *funcionario){
    printf("Nome do funcionário: %s\n",funcionario->nome);
    printf("salário atual: %.2f\n", funcionario->salario);
    printf("indentificador: %d\n", funcionario->indentificador);
    printf("cargo: %s\n", funcionario->cargo);
    
    printf("\n");
}

void alterarsal(funcio * funcionario, float novosal, int indentifi){
    if(funcionario->indentificador == indentifi){
        funcionario->salario = novosal;
    }
}

void menorMaiorsal(funcio *funcionario, int tamanho){
    float menorSalario = funcionario[0].salario;
    float maiorSalario = funcionario[0].salario;
    int indiceMenor = 0, indiceMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (maiorSalario < funcionario[i].salario) {
            maiorSalario = funcionario[i].salario;
            indiceMaior = i;
        } else if (menorSalario > funcionario[i].salario) {
            menorSalario = funcionario[i].salario;
            indiceMenor = i;
        }
    }

    printf("Funcionário com maior salário: \n");
    imprimir(&funcionario[indiceMaior]);

    printf("Funcionário com menor salário: \n");
    imprimir(&funcionario[indiceMenor]);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, tamanho;
    printf("Quantidade de funcionários: ");
    scanf("%d", &tamanho);
    float novoSalario;
    int indentifi;
    funcio * funciona = (funcio *) malloc(tamanho *sizeof(funcio));
    if(funciona == NULL){
        exit(1);
    }

    for(i =0; i < tamanho; i++){
        printf("Dados do %d° funcionário:\n",i+1);
        preencher(&funciona[i]);

    }
    system("cls");
    for(i =0; i < tamanho; i++){
        printf("Dados do %d° funcionário:\n", i+1);
        imprimir(&funciona[i]);
    }
    i =1;
    do{
        printf("Digite o indentificador do %d° funcionário que terá o salário alterado [99]sair:  ", i);
        scanf("%d", &indentifi);
        if(indentifi == 99){
            break;
        }
        printf("Valor do novo salário: ");
        scanf("%f", &novoSalario);

        for(i =0; i < tamanho; i++){
            alterarsal(&funciona[i], novoSalario, indentifi);
        }
    }while(indentifi != 99);

 if(indentifi != 99){
    for(i =0; i < tamanho; i++){
        printf("Dados do %d° funcionário atualizados:\n", i+1);
        imprimir(&funciona[i]);
    }

 }

    menorMaiorsal(funciona, tamanho);

    


    free(funciona);

    return 0;

}