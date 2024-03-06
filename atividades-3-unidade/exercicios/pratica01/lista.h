typedef struct lista Lista;

/*  função que inicializa a lista atribuindo NULL*/
Lista *cria_lista(void);

/*  função que insere elementos inteiros na lista*/

Lista *insere_lista(Lista *lista, int valor);

/* imprime os valores da lista */
void imprime(Lista* l);

/* Função que vereficar se uma osita está vazia */
void lista_vazia(Lista *lista);

/*  */
Lista *busca_lista(Lista *lista, int valor);

/* função que retornar o ultimo nó da lista*/
Lista *ultimo(Lista* l);

/*função para concatenar listaas*/
Lista *contatena(Lista* l1, Lista* l2);

/*Lista para remover ocorrencias de n*/
Lista *retira_n(Lista* l, int n);

