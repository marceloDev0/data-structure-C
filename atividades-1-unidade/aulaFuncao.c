#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int soma(int a, int b){
    return a + b;
}

int subtrcao(int a, int b){
    return a - b;
}

int divisao(int a, int b){
    return a / b;
}

int multiplicacao(int a, int b){
    return a * b;
}

int calcula(int x, int y, int (*operacao)(int, int)){ // fun��o que chamar o endere�o de uma func�o e
    return (*operacao)(x, y);
}
int main(){
    setlocale(LC_ALL, "portuguese");

    int resultado;
    int n, numero1, numero2;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);
    do{ // repetir quantas vezes o usu�rio quiser
        printf("\nEscolha uma opc�o: \n[1]soma\n[2]subtrac�o\n[3]divis�o\n[4]multiplicac�o\n[5]Escolher novos n�meros\n[6]Sair\n");
        scanf("%d", &n);
        system("cls"); // limpa tela
        switch (n)     // usado para escolher a op�ao que o usu�rio que realizar
        {
        case 1:
            resultado = calcula(numero1, numero2, soma);
            printf("Resultado da soma entre %d e %d: %d\n", numero1, numero2, resultado);
            break;
        case 2:
            resultado = calcula(numero1, numero2, subtrcao);
            printf("Resultado da subtra��o entre %d e %d: %d\n", numero1, numero2, resultado);
            break;
        case 3:
            resultado = calcula(numero1, numero2, divisao);
            printf("Resultado da divis�o inteira entre %d e %d: %d\n", numero1, numero2, resultado);
            break;
        case 4:
            resultado = calcula(numero1, numero2, multiplicacao);
            printf("Resultado da multiplica��o entre %d e %d: %d\n", numero1, numero2, resultado);
            break;
        case 5:
            printf("Digite o primeiro n�mero: ");
            scanf("%d", &numero1);
            printf("Digite o segundo n�mero: ");
            scanf("%d", &numero2);
            break;
        case 6:
            break;
        default:
            printf("valor incorreto!!!");
            break;
        }

    } while (n != 6);

    return 0;
}