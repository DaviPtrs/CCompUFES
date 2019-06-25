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

/*Cria uma lista de produtos vazia
* inputs: nenhuma
* output: uma lista de produtos vazia
* pre-condicao: nenhuma
* pos-condicao: nenhuma
*/
tListaProduto criaListaProdutos();

/*Insere um produto na lista
* inputs: Produto do tipo tProduto e a lista do tipo tListaProduto
* output: retorna 0 se o produto não foi inserido, e 1 se foi inserido
* pre-condicao: Se a lista está cheia ou um produto de mesmo código já existe
* pos-condicao: nenhuma
*/
int insere(tProduto produto, tListaProduto *lista);

/*Verifica se a lista está vazia
* inputs: lista do tipo tListaProduto
* output: retorna 1 se a lista for vazia, 0 caso contrário
* pre-condicao: nenhuma
* pos-condicao: nenhuma
*/
int vazia(tListaProduto *lista);

/*Retorna o estoque de um produto
* inputs: lista do tipo tListaProduto, posição p inteira
* output: retorna a quantidade de items em estoque do produto
* pre-condicao: nenhuma
* pos-condicao: nenhuma
*/
int checaEstoquePos(int p, tListaProduto *lista);

/*Retira um produto da lista
* inputs: lista do tipo tListaProduto, e um código inteiro
* output: retorna 1 se o produto foi removido, 0 caso contrário
* pre-condicao: se a lista não está vazia e se o produto existe
* pos-condicao: se o produto saiu de estoque
*/
int retira(int codigo, tListaProduto *lista);

/*Retorna a quantidade de produtos na lista
* inputs: lista do tipo tListaProduto
* output: retorna a quantidade de produtos
* pre-condicao: nenhuma
* pos-condicao: nenhuma
*/
int quantidade(tListaProduto *lista);

/*Verifica se o produto existe
* inputs: lista do tipo tListaProduto, e o codigo inteiro
* output: retorna o indice do produto caso existe, ou -1 caso contrário
* pre-condicao: se a lista não é vazia
* pos-condicao: se o produto foi achado ou não
*/
int existeProduto(tListaProduto *lista, int codigo);

/*Retorna o produto pelo código
* inputs: lista do tipo tListaProduto, e o codigo inteiro
* output: retorna o produto caso exista, ou nada caso não exista
* pre-condicao: se o indice retornado pela função existeProduto >= 0
* pos-condicao: nenhuma
*/
tProduto buscaCodigo(tListaProduto *lista, int codigo);

/*Retorna o produto mais barato
* inputs: lista do tipo tListaProduto
* output: retorna o produto cujo valor é o mais baixo
* pre-condicao: se lista não está vazia
* pos-condicao: nenhuma
*/
tProduto maisBarato(tListaProduto *lista);

