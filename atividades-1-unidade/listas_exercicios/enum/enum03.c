
#include <stdio.h>
#include <stdlib.h>

typedef enum mes{
    JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
}Mes;

typedef struct data {
    int dia;
    int ano;
    Mes mes;
}Data;

void preencher(Data * data){

    printf("Digite o Dia: ");
    scanf("%d", &data->dia);

    printf("Digite o Mês (1 a 12): ");
    scanf("%u", &data->mes);

    printf("Digite o ano: ");
    scanf("%d", &data->ano);

}

void imprimir(Data * data){

    printf("A data de hoje é: %02d/%02d/%d", data->dia, data->mes, data->ano);

}

int main(void){
    Data data;
    
    preencher(&data);
    imprimir(&data);

    return 0;
}