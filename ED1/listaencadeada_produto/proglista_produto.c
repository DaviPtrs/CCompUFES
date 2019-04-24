
/*
DAVI DE SOUZA PETRIS
Implementacao Laboratorio 2
Modificações: VM
========================================================================== */
#include <sys/time.h>
#include "listaencadeada.h"

/* ========================================================================== */

void FLVazia(TipoLista *Lista){
	if(!Vazia(*Lista)){
		Lista->Primeiro = Lista->Ultimo = NULL;
	}
}

int Vazia(TipoLista Lista){
	return ((Lista.Primeiro == NULL) && (Lista.Ultimo == NULL));
}

void Insere(Produto x, TipoLista *Lista){
	if(Vazia(*Lista)){
		Lista->Primeiro = (TipoApontador) malloc(sizeof(TipoCelula));
		Lista->Primeiro->Item = x;
		Lista->Ultimo = Lista->Primeiro;
	}else{
		if(BuscaCodigo(x.codigo, Lista) == NULL){
			Lista->Ultimo->Prox = (TipoApontador) malloc(sizeof(TipoCelula));
			Lista->Ultimo = Lista->Ultimo->Prox;
			Lista->Ultimo->Item = x;
		}else{
			printf("Código já existente!\n");
		}
	}
}

TipoApontador BuscaCodigo(int codigo, TipoLista *Lista){
	for(TipoApontador elem = Lista->Primeiro; elem != NULL; elem = elem->Prox){
		if(elem->Item.codigo == codigo){
			return elem;
		}
	}
	return NULL;
}

void Retira(int codigo, TipoLista *Lista, Produto *Item){
	if(Vazia(*Lista)){
		printf("Produto não encontrado");
	}else{
		TipoApontador elemAnt;
		for(TipoApontador elem = Lista->Primeiro; elem != NULL; elem = elem->Prox){
			if(elem->Item.codigo == codigo){
				if(elem->Item.qtd <= 0){
					*Item = elem->Item;
					if(elem == Lista->Primeiro){
						Lista->Primeiro = Lista->Primeiro->Prox;
					}else{
						elemAnt->Prox = elem->Prox;
					}
					free(elem);
					return;
				}else{
					printf("Produto em estoque não pode ser removido!\n");
				}
			}else{
				elemAnt = elem;
			}
		}
		printf("Produto não encontrado!\n");
	}
}

Produto maisBarato(TipoLista *Lista){
	if(!Vazia(*Lista)){
		Produto candidato;
		for(TipoApontador elem = Lista->Primeiro; elem != NULL; elem = elem->Prox){
			if((elem == Lista->Primeiro) || (elem->Item.preco < candidato.preco)){
				candidato = elem->Item;
			}
		}
		return candidato;
	}
	printf("A lista está vazia!\n");
	exit(1);
}

void ImprimeLista(TipoLista Lista){
	TipoApontador atual;
	Produto atualI;
	atual = Lista.Primeiro;
	if(!Vazia(Lista)){
		printf("COD\tNOME\t\tQTD\tPREÇO\n");
		while(atual!=NULL){	
			atualI = atual->Item;
			printf("%d\t%.7s\t\t%d\t%.2f\n", atualI.codigo, atualI.nome, atualI.qtd, atualI.preco);
			atual = atual->Prox;
		}
	}
}

int Quantidade(TipoLista Lista){
	int i = 0;
	for(TipoApontador elem = Lista.Primeiro; elem != NULL; elem = elem->Prox){
		i++;
	}
	return i;
}

Produto criaProduto(int cod, char *nome, int qtd, float preco){
	Produto produto;

	produto.codigo = cod;
	produto.nome = nome;
	produto.qtd = qtd;
	produto.preco = preco;

	return produto;
}

void ImprimeProduto(Produto p){
	printf("COD = %d\nNOME = %s\nQTD. = %d\nPREÇO = %.2f\n", p.codigo, p.nome, p.qtd, p.preco);
}

void LiberaLista(TipoLista *Lista){
	TipoApontador backup;

	while(Lista->Primeiro != NULL){
		backup = Lista->Primeiro;
		Lista->Primeiro = Lista->Primeiro->Prox;
		free(backup);
	}
}

int main(){
	TipoLista lista;
	Produto item;

	FLVazia(&lista);	
	
	item = criaProduto(1,"Sabonete", 10, 3.90);
	Insere(item, &lista);
	item = criaProduto(2,"Arroz", 20, 13.90);
	Insere(item, &lista);
	item = criaProduto(3,"Feijao", 1, 17.90);
	Insere(item, &lista);
	item = criaProduto(4,"Tomate", 0, 10);
	Insere(item, &lista);
	item = criaProduto(5,"Uva", 5, 8);
	Insere(item, &lista);
	
	Insere(item, &lista);

	printf("\nTamanho da lista = %d\n", Quantidade(lista));
	ImprimeLista(lista);
	Retira(4, &lista, &item);
	printf("\nTamanho da lista = %d\n", Quantidade(lista));
	ImprimeLista(lista);
	TipoApontador p = BuscaCodigo(4, &lista);
	if(p!=NULL) ImprimeProduto(p->Item);
	item = maisBarato(&lista);
	ImprimeProduto(item);

	LiberaLista(&lista);

	return 0;
}
