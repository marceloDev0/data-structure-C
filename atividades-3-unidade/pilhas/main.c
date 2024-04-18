#include "pilha.h"

int main()
{
    Pilha *nova_pilha = pilha_cria();

    pilha_push(nova_pilha, 1);
    pilha_push(nova_pilha, 2);
    pilha_push(nova_pilha, 3);

    imprime_pilha(nova_pilha);

    pilha_libera(nova_pilha);
}