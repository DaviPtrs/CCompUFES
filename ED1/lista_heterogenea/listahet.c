#include "listahet.h"
#include <string.h>

ListaHet* cria (){
    ListaHet* lista;
    return lista;
}

Cliente* cria_cliente (char* nome, int id){
    if((nome != NULL) && (id >= 0)){
        Cliente* cli;
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
        imov->ano = ano;
        imov->id = id;
        imov->valor = valor;
        return imov;
    }
    printf("Função cria_imovel recebeu parametros invalidos!\n");
    return NULL;
}

// ListaHet* insere_movel (ListaHet* lista, Cliente* dono, Movel* item){
    
// }

