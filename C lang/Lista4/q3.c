#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void opcoes(char str[], char opc){
    char str2[20], str3[20], c1, c2;
    int comp, posIni, tamanho;
    int cont = 0;

    switch (opc){
        case 'a':
            printf("Tamanho da string: %d\n", strlen(str));
            break;

        case 'b':
            printf("Digite outra string: ");
            getchar();
            fgets(str2,20,stdin);
            str2 [strcspn(str2, "\n")] = '\0';
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
            getchar();
            fgets(str2,20,stdin);
            str2 [strcspn(str2, "\n")] = '\0';
            
            strcpy(str,str3);
            strcat(str,str2);

            printf("S1 e S2 concatenadas: %s\n", str);
            strcpy(str3,str);
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
            scanf(" %c", &c1);
            for(int i = 0; i<strlen(str); i++){
                if (str[i] == c1){
                    cont++;
                }
            }

            printf("O caractere %c aparece na string %d vezes!\n", c1, cont);
            break;

        case 'f':
            printf("Digite a posição inicial e o tamanho: ");
            scanf("%d %d", &posIni, &tamanho);
            if ((posIni+tamanho) > (strlen(str))){
                printf("Tamanho excedido!\n");
            }else{
                for(int i = posIni; i<(tamanho+posIni); i++){
                    printf("%c", str[i]);
                }
                puts("");
            }
            break;
        
        case 'g':
            printf("Digite dois caracteres (o primeiro será substituido pelo segundo): ");
            scanf(" %c %c", &c1, &c2);
            for(int i = 0; i<(strlen(str)); i++){
                if (str[i] == c1){
                    str[i] = c2;
                    break;
                }else if (i == (strlen(str)-1)){
                    printf("O caractere %c não foi encontrado na string\n", c1);
                }
            }
            printf("A string virou: %s\n", str);
            
            break;
        case 'h':
            puts("Saindo...\n");
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
    getchar();
    fgets(str,20,stdin);
    str [strcspn(str, "\n")] = '\0';

    while (menu(str) != 'h'){
    }

}