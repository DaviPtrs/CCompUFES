#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

tListaProduto criaListaProdutos(){
    tListaProduto lista;
    lista.Primeira = 0;
    lista.Ultima = 0;

    return lista;
}

int insere(tProduto produto, tListaProduto *lista){
    if(lista->Ultima > MAXTAM){
        printf("A lista está cheia!\n");
        return 0; //Retorna 0 se o elemento não foi adicionado
    }else if (existeProduto(lista, produto.codigo) != -1){ // ESSE ELSE IF TA BUGANDO
        printf("Código já existente!\n");
        return 0;
    }else{
        lista->produtos[lista->Ultima] = produto;
        lista->Ultima++;
        return 1; //Retorna 1 se o elemento foi adicionado
    }
}

int vazia(tListaProduto *lista){
    if(lista->Ultima == lista->Primeira)
        return 1;
    else
        return 0;
}

void shiftR(tListaProduto *lista, int p){
    for(int i = p; i<(quantidade(lista)); i++){
        lista->produtos[i - 1] = lista->produtos[i];
    }
}

int checaEstoquePos(int p, tListaProduto *lista){
    return lista->produtos[p].qtd;
}


int retira(int codigo, tListaProduto *lista){
    if(vazia(lista)){
        printf("A lista está vazia!\n");
        return 0; //Retorna 0 se o item não foi retirado
    }else{
        int flag = existeProduto(lista, codigo);
        if(flag < 0){
            printf("Produto não existe!\n");
            return 0;
        }else if(checaEstoquePos(flag, lista) != 0){
            printf("Produto em estoque não pode ser removido!\n");
            return 0;
        }else{
            shiftR(lista, flag+1);
            lista->Ultima--;
        }
    }
}

int quantidade(tListaProduto *lista){
    int quantidade;
    quantidade = lista->Ultima - lista->Primeira;

    return quantidade;
}

int existeProduto(tListaProduto *lista, int codigo){
    if(!vazia(lista)){
        for(int i = 0; i<quantidade(lista); i++){
            if(lista->produtos[i].codigo == codigo)
                return i;
        }
    }
    return -1;
}

tProduto buscaCodigo(tListaProduto *lista, int codigo){
    int flag = existeProduto(lista, codigo);
    if(flag < 0){
        printf("Produto não existe!\n");
        return;
    }else
        return lista->produtos[flag];
    
}

tProduto maisBarato(tListaProduto *lista){
    if(vazia(lista)){
        printf("A lista está vazia!\n");
        return;
    }else{
        tProduto cheaper;
        for(int i = 0; i < quantidade(lista); i++){
            if(i == 0) 
                cheaper = lista->produtos[i];
            else{
                if(lista->produtos[i].preco < cheaper.preco)
                    cheaper = lista->produtos[i];
            }
        }
        return cheaper;
    }
}

int main(int argc, char **argv) {
	printf("oi");

	return 0;
}

