#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void opcoes(char str[], char opc){
    char str2[20], str3[20], letra;
    int comp, posIni, tamanho;
    int cont = 0;

    switch (opc){
        case 'a':
            printf("Tamanho da string: %d\n", strlen(str));
            break;

        case 'b':
            printf("Digite outra string: ");
            scanf(" %s", str2);
            puts("");
            comp = strcmp(str, str2);
            if (comp < 0){
                printf("S1 é menor que S2\n");
            }else if (comp==0){
                printf("S1 é igual a S2\n");
            }else{
                printf("S1 é maior que S2\n");
            }
            break;

        case 'c':
            printf("Digite outra string: ");
            scanf(" %s", str2);
            
            str3[20] = str[20];
            strcat(str,str2);

            printf("S1 e S2 concatenadas: %s\n", str);
            str[20] = str3[20];
            break;

        case 'd':
            printf("String reversa: ");
            for(int i = strlen(str)-1; i>=0; i--){
                printf("%c", str[i]);
            }
            puts("");
            break;

        case 'e':
            printf("Digite um caractere: ");
            scanf(" %c", &letra);
            for(int i = 0; i<strlen(str); i++){
                if (str[i] == letra){
                    cont++;
                }
            }

            printf("O caractere %c aparece na string %d vezes!\n", letra, cont);
            break;

        case 'f':
            printf("Digite a posição inicial e o tamanho: ");
            scanf("%d %d", posIni, tamanho);
            if ((posIni+tamanho) > (strlen(str))){
                printf("Tamanho excedido!\n");
            }else{
                for(int i = posIni, c = 0; c<tamanho; i++, c++){
                    printf("%c", str[i]);
                }
                puts("");
            }
            break;
            
        case 'h':
            break;
        default:
            printf("OPÇÃO INVÁLIDA!\n");
        
    }
}

char menu(char str[]){
    char opc;
    puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    puts("a_Imprimir o tamanho da string S1");
    puts("b_Comparar a string S1 com uma nova string S2");
    puts("c_Concatenar a string S1 com uma nova string S2");
    puts("d_Imprimir a string S1 de forma reversa");
    puts("e_Contar  quantas  vezes  um dado  caractere  aparece  na  string  S1.");
    puts("f_Retornar uma substring da string S1.");
    puts("g_Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2");
    puts("h_Sair do menu");
    printf("Escolha uma opção: ");
    scanf(" %c", &opc);

    opcoes(str, opc);
    return opc;
}    

void main(){
    char str[20];
    printf("Digite uma string de no max 20 caracteres: ");
    scanf(" %s", str);
    while (menu(str) != 'h'){

    }

    
}

    
