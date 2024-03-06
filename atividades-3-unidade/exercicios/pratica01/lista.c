#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista
{
    int informacao;
    Lista *prox_elemento;
};

Lista *cria_lista(void)
{
    return NULL;
}

Lista *insere_lista(Lista *lista, int valor)
{
    // aloca novo nó da lista encadeada
    Lista *novo_no = (Lista *)malloc(sizeof(Lista));
    if (novo_no == NULL)
    {
        exit(1);
    }
    // Adiciona o vlaor no campo informação
    novo_no->informacao = valor;
    // conecta o novo nó a lista
    novo_no->prox_elemento = lista;
    return novo_no;
}

void imprime(Lista* l){
    Lista* contador;
    for(contador = l; contador!=NULL; contador = contador->prox_elemento){
        printf("%d ", contador->informacao);
    }
}

Lista *busca_lista(Lista *lista, int valor){
    Lista *p;
    int cont = 0;
    for (p = lista; p != NULL; p = p->prox_elemento){
        if (p->informacao == valor)
        {
            cont = cont + 1;
        }
    }
    printf("\nO valor %d aparece %d vezes na lista\n", valor, cont);
    // não achou o elemento
    return NULL;
}

Lista* ultimo(Lista* l){
    Lista* p;
    for(p = l; p->prox_elemento != NULL; p = p->prox_elemento);
    return p;
}

Lista* concatena(Lista* l1, Lista* l2){
    Lista* p;
    for(p = l1; p->prox_elemento != NULL; p = p->prox_elemento);
    p->prox_elemento = l2;
    return l1;
}

Lista* retira_n(Lista* l, int n){
    Lista* anterior = NULL;
    Lista* p = l;
    while(p != NULL && p->informacao != n){
        anterior = p;
        p = p->prox_elemento;
    }
    if(p == NULL){
        return l;
    }
    if(anterior == NULL){
        l = p->prox_elemento;
    }else{
        anterior->prox_elemento = p->prox_elemento;
    }
    free(p);
    return l;
}