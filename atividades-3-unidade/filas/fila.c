#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *Criafila(int MAX_SIZE)
{
    Fila *Q = (Fila *)calloc(1, sizeof(Fila));

    Q->val = (int *)calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtde = 0;
    Q->ini = Q->fim = 0;

    return Q;
}

void DestruirFila(Fila **Q)
{
    Fila *Qaux = *Q;
    free(Qaux->val);
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q)
{
    return (Q->qtde == 0);
    printf("Fila vazia");
}

int FilaCheia(Fila *Q)
{
    return (Q->qtde == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elem)
{
    if (FilaCheia(Q))
    {
        printf("Warning: Fila esta cheia\n");
        return 0;
    }
    else
    {
        Q->val[Q->fim] = elem;
        Q->qtde++;
        return 1;
    }
}

int RemoveFila(Fila *Q)
{
    if (FilaVazia(Q))
    {
        printf("Warning: Fila esta vazia\n");
        return 0;
    }
    else
    {
        Q->ini = (Q->ini + 1) % Q->MAX_SIZE;
        Q->qtde--;
        return 1;
    }
}

int ConsultarFila(Fila *Q, int *elem)
{
    if (FilaVazia(Q))
    {
        printf("Warning: Fila esta vazia\n");
        return 0;
    }
    else
    {
        *elem = Q->val[Q->ini];
        printf("Elemento encontrado: %d", *elem);
        return 1;
    }
}