#ifndef PRODUTO_H_
#define PRODUTO_H_
#endif
#define MAXTAM 1000

typedef struct {
    int codigo;
    char nome[30];
    float preco;
    int qtd;
} tProduto;

typedef int Posicao;

typedef struct {
    tProduto produtos[MAXTAM];
    Posicao Primeira, Ultima;
} tListaProduto;

tListaProduto criaListaProdutos();

int insere(tProduto produto, tListaProduto *lista);

int vazia(tListaProduto *lista);

// int retira(int p, tListaProduto *lista);

int quantidade(tListaProduto *lista);

int existeProduto(tListaProduto *lista, int codigo);

tProduto buscaCodigo(tListaProduto *lista, int codigo);

tProduto maisBarato(tListaProduto *lista);

