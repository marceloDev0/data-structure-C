#include "lista.c"

int main(void){
    Lista * lista_encadeada = cria_lista();
    Lista * lista_encadeada2 = cria_lista();
    //inserindo o valor 3 na lista encadeada
    while(1){
        int valor;
        printf("Digite um valor para inserir na lista encadeada: ");
        scanf("%d", &valor);
        if (valor == 0){
            break;
        }
        lista_encadeada = insere_lista(lista_encadeada, valor);
    }
    lista_encadeada2 = insere_lista(lista_encadeada2, 44);
    int busca;
    printf("Digite um valor para buscar na lista encadeada: ");
    scanf("%d", &busca);
    busca_lista(lista_encadeada, busca);
    Lista * no;
    no = ultimo(lista_encadeada);
    printf("\nendereco de memoria do ultimo no: %p\n", no);
    imprime(lista_encadeada);
    concatena(lista_encadeada, lista_encadeada2);
    retira_n(lista_encadeada, 10);
    printf("\n");
    imprime(lista_encadeada);
}

















/* 1) Considere listas encadeadas de valores inteiros e implemente uma função para
retornar o número de nós da lista que possuem o campo info com valores
maiores do que n. Essa função deve obedecer ao protótipo: int maiores(Lista* l,
int n);
2) Implemente uma função que tenha como valor de retorno o ponteiro para o
último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo(Lista* l);
3) Implemente uma função que receba duas listas encadeadas de valores reais e
retorne a lista resultante da concatenação das duas listas recebidas como
parâmetros, isto é, após a concatenação, o último elemento da primeira lista
deve apontar para o primeiro elemento da segunda lista, conforme ilustrado a
seguir:
Essa função deve obedecer ao protótipo: Lista* contatena(Lista* l1, Lista* l2);
4) Considere listas de valores inteiros e implemente uma função que receba como
parâmetros uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorrências de n e retorne a lista resultante. Essa função deve obedecer ao
protótipo: Lista* retira_n(Lista* l, int n);
OBS.: Os exercícios apresentados sugerem a implementação de diferentes
funções. Sendo assim, o programador deve escrever um programa (função
main) para testar sua implementação */