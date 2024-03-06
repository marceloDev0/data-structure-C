#include "lista.c"

int main(void){
    Lista * lista_encadeada = cria_lista();
    //inserindo o valor 3 na lista encadeada
    lista_encadeada = insere_lista(lista_encadeada, 3);
    lista_encadeada = insere_lista(lista_encadeada, 4);
    lista_encadeada = insere_lista(lista_encadeada, 5);
    lista_encadeada = insere_lista(lista_encadeada, 6);
    lista_encadeada = insere_lista(lista_encadeada, 7);
    lista_vazia(lista_encadeada);
    imprime(lista_encadeada);
    busca_lista(lista_encadeada, 5);
    
    return 0;
}