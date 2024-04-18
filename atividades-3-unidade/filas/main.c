#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila *Q = Criafila(50);

    if (Q == NULL)
    {
        printf("Erro ao criar a fila.\n");
        return 1;
    }

    InsereFila(Q, 10);

    int vazia = FilaVazia(Q);
    int cheia = FilaCheia(Q);

    RemoveFila(Q);

    int elem;
    ConsultarFila(Q, &elem);

    DestruirFila(&Q);

    return 0;
}