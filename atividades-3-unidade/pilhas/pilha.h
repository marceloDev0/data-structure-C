/**
 * Definição de um novo tipo: Pilha
 */
typedef struct pilha Pilha;

/**
 * Cria uma nova pilha.
 * 
 * @return Um ponteiro para a nova pilha.
 */
Pilha *pilha_cria(void);

/**
 * Insere um novo elemento na pilha.
 * 
 * @param p A pilha onde o novo elemento será inserido.
 * @param v O valor a ser inserido na pilha.
 */
void pilha_push(Pilha *p, float v);

/**
 * Remove e retorna o elemento do topo da pilha.
 * 
 * @param p A pilha de onde o elemento será removido.
 * @return O valor do elemento removido.
 */
float pilha_pop(Pilha *p);

/**
 * Verifica se a pilha está vazia.
 * 
 * @param p A pilha a ser verificada.
 * @return 1 se a pilha estiver vazia, 0 caso contrário.
 */
int pilha_vazia(Pilha *p);

/**
 * Libera a memória alocada dinamicamente para a pilha.
 * 
 * @param p A pilha a ser liberada.
 */
void pilha_libera(Pilha *p);

/**
 * Imprime os valores da pilha.
 * 
 * @param p A pilha cujos valores serão impressos.
 */
void imprime_pilha(Pilha *p);