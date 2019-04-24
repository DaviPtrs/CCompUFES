#include "listahet.h"
#include <string.h>

int vazia(ListaHet *lista){
    return (lista == NULL);
}

void liberaCelula(ListaHet *celula){
    free(celula->dono);
    free(celula->item);
    free(celula);
}

void liberaLista(ListaHet *lista){
    if(!vazia(lista)){
        while(lista !=NULL){
            ListaHet* bckp;
            bckp = lista;
            lista = lista->Prox;
            liberaCelula(bckp);
        }
    }
}

ListaHet* cria (){
    ListaHet* lista;
    lista = NULL;

    return lista;
}

Cliente* cria_cliente (char* nome, int id){
    if((nome != NULL) && (id >= 0)){
        Cliente* cli;
        cli = (Cliente *) malloc(sizeof(Cliente));
        strcpy(cli->nome, nome);
        cli->id = id;
        return cli;
    }
    printf("Função cria_cliente recebeu parametros invalidos!\n");
    return NULL;
}

Movel* cria_movel (int placa, int ano, float valor){
    if((placa >= 0) && (ano >= 0) && (valor >= 0)){
        Movel* veh;
        veh = (Movel *) malloc(sizeof(Movel));
        veh->ano = ano;
        veh->placa = placa;
        veh->valor = valor;
        return veh;
    }
    printf("Função cria_movel recebeu parametros invalidos!\n");
    return NULL;
}

Imovel* cria_imovel (int id, int ano, float valor){
    if((id >= 0) && (ano >= 0) && (valor >= 0)){
        Imovel* imov;
        imov = (Imovel *) malloc(sizeof(Imovel));
        imov->ano = ano;
        imov->id = id;
        imov->valor = valor;
        return imov;
    }
    printf("Função cria_imovel recebeu parametros invalidos!\n");
    return NULL;
}

ListaHet* insere_movel (ListaHet* lista, Cliente* dono, Movel* item){
    ListaHet* celula;
    celula = malloc(sizeof(ListaHet));
    celula->dono = dono;
    celula->item = (Movel *)item;
    celula->tipo = 1;


    if(!vazia(lista)){
        celula->Prox = lista;
    }

    return celula;
}

ListaHet* insere_imovel (ListaHet* lista, Cliente* dono, Imovel* item){
    ListaHet* celula;
    celula = malloc(sizeof(ListaHet));
    celula->dono = dono;
    celula->item = (Imovel *)item;
    celula->tipo = 2;


    if(!vazia(lista)){
        celula->Prox = lista;
    }

    return celula;
}

int main(){
    printf ("\n **** Preparando para a Terceira Bateria de Testes. Vale 10,0 **** \n\n");

    // criando a lista vazia
    ListaHet* lista = cria();

//     //tenta retirar com lista vazia
//     lista = retira_cliente(lista, 1); 

    // criando alguns alunos apenas para testar (mais adequado seria carregar de um arquivo)
	
    Cliente* maria = cria_cliente("maria", 1);
    Cliente* sofia = cria_cliente("sofia", 2);
    Cliente* jose = cria_cliente("jose", 3);

	
    Movel* carro_sofia = cria_movel (2784, 2011, 25000);
    Movel* carro1_jose = cria_movel (3784, 2009, 12000);
    Movel* carro_maria = cria_movel (1852, 2000, 9000);
    Movel* carro2_jose = cria_movel (3785, 2011, 20000);	
    Imovel* casa_sofia = cria_imovel (222, 1984, 500000);
    Imovel* casa_jose = cria_imovel (333, 1978, 600000);
	
   // inserindo elementos na lista
    lista = insere_movel (lista, sofia, carro_sofia);
    lista = insere_movel (lista, jose, carro1_jose);
    lista = insere_movel (lista, maria, carro_maria);
    lista = insere_movel (lista, jose, carro2_jose);
    lista = insere_imovel (lista, sofia, casa_sofia);
    lista = insere_imovel (lista, jose, casa_jose);

//     imprime (lista);    


//     float valor_assegurado_jose = calcula_valor_assegurado (lista, jose, 0.7, 0.25);

//     printf ("O valor assegurado de Jose eh: %f \n", valor_assegurado_jose);


//     lista = retira_cliente (lista, 1);

//     printf ("Imprimindo a lista novamente \n");

//     imprime (lista);    


//     float valor_assegurado_sofia = calcula_valor_assegurado (lista, sofia, 0.7, 0.25);

//     printf ("O valor assegurado de sofia eh: %f \n", valor_assegurado_sofia);

//     lista = retira_cliente (lista, 2);

//     printf ("Imprimindo a lista novamente \n");
//     imprime (lista);

    liberaLista(lista);
    printf ("\n **** PARABENS!!! **** \n\n");
	return 1;
}