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
        // printf("A lista está cheia!\n");
        return 0; //Retorna 0 se a lista estiver cheia
    // }else if (existeProduto(lista, produto.codigo) < 0){ // ESSE ELSE IF TA BUGANDO
    //     // printf("Código já existente!\n");
    //     return 0;
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

int retira(int codigo, tListaProduto *lista){
    if(vazia(lista)){
        printf("A lista está vazia!\n");
        return 0; //Retorna 0 se o item não foi retirado
    }else{
        int verificador = existeProduto(lista, codigo);
        if(verificador < 0){
            printf("Produto não existe");
            return 0;
        }else{
            shiftR(lista, verificador+1);
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
    if(vazia(lista)){
        printf("A lista está vazia!\n");
        return -1;
    }else{
        for(int i = 0; i<quantidade(lista); i++){
            if(lista->produtos[i].codigo == codigo)
                return i;
        }
        printf("Produto não existe!\n");
        return -1;
    }
}

tProduto buscaCodigo(tListaProduto *lista, int codigo){
    int verificador = existeProduto(lista, codigo);
    if(verificador < 0){
        printf("Produto não existe");
        return;
    }else
        return lista->produtos[verificador];
    
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


void main(){
    tListaProduto teste;
    teste = criaListaProdutos();

    // if(vazia(&teste)) printf("A lista está vazia\n");

    tProduto carro;
    carro.codigo = 1;
    sprintf(carro.nome, "Nissan Skyline R34");
    carro.preco = 15000;
    carro.qtd = 1;

    insere(carro, &teste);
    // printf("Adicionando produto\n");
    // insere(carro, &teste);

    // retira(1, &teste);
    // printf("Removendo\n");

    // if(!vazia(&teste)) printf("A lista não está vazia\n");
    // else printf("A lista está vazia\n");


    // printf("Quantidade = %d\n", quantidade(&teste));

    // tProduto produto = maisBarato(&teste);
    // printf("%s", produto.nome);


}
