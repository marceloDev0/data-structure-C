typedef struct _fila
{
    int ini, fim;
    int qtde;     // Número de elementos da fila
    int MAX_SIZE; // Tamanho máximo da fila
    int *val;     // Vetor dos valores
} Fila;

/* Função que cria uma fila */
Fila *Criafila(int Max_size);

/* Função para destruir uma fila */
void DestruirFila(Fila **Q);

/* Função para verificar se a fila esta vazia*/
int FilaVazia(Fila *Q);

/* Função para verificar se a fila esta cheia*/
int FilaCheia(Fila *Q);

/* Função para inserir um elemento na fila*/
int InsereFila(Fila *Q, int elem);

/* Função para remover um elemento da fila*/
int RemoveFila(Fila *Q);

/* Função para consultar o primeiro elemento da fila*/
int ConsultarFila(Fila *Q, int *elem);