typedef struct lista Lista;

/*  função que inicializa a lista atribuindo NULL
    retorna: lista inicializada*/
Lista *cria_lista(void);

/*  função que insere elementos inteiros na lista
    argumentos:
    Lista * lista;
    int valor: valor inteiro a ser inserido
    retorno:
    nova lista*/
Lista *insere_lista(Lista *lista, int valor);

/* imprime os valores da lista */
void imprime(Lista* l);

/* Função que vereficar se uma osita está vazia
    argumentos:
    Lista * lista: lista a ser verificada*/
void lista_vazia(Lista *lista);

/* função para busca elemento na lista*/
Lista *busca_lista(Lista *lista, int valor);

/* funçao que remover elemento da lista */