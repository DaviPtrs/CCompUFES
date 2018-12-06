#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{ 
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

typedef struct Aluno Aluno;

struct MediaAluno{
    Aluno aluno;
    float media;
};

typedef struct MediaAluno MediaAluno;

struct Situacao{
    int matricula;
    char *estado;
};

typedef struct Situacao Situacao;

int main(){
    Aluno *alunos;
    
    alunos = malloc(5 * sizeof(Aluno));

    Aluno maiorNota;

    MediaAluno medias[5];

    MediaAluno maiorMedia;

    MediaAluno menorMedia;

    Situacao situacoes[5];



    for(int i = 0; i<5; i++){
        printf("Aluno %d\n", i+1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, 50, stdin);
        strtok(alunos[i].nome, "\n");

        printf("Notas: ");
        scanf("%f %f %f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);

        if ((i == 0) || (alunos[i].nota1 > maiorNota.nota1))
            maiorNota = alunos[i];
        
        medias[i].aluno = alunos[i];
        medias[i].media = (alunos[i].nota1 +alunos[i].nota2 + alunos[i].nota3) / 3;

        if ((i == 0) || (medias[i].media > maiorMedia.media)){
            maiorMedia.aluno = medias[i].aluno;
            maiorMedia.media = medias[i].media;
        }

        if ((i == 0) || (medias[i].media < menorMedia.media)){
            menorMedia.aluno = medias[i].aluno;
            menorMedia.media = medias[i].media;
        }

        situacoes[i].matricula = alunos[i].matricula;
        if(medias[i].media >= 7)
            situacoes[i].estado = "Aprovado";
        else
            situacoes[i].estado = "Reprovado";

        puts("");
    }

    printf("A maior nota da p1 foi de %s. Nota: %.2f\n", maiorNota.nome, maiorNota.nota1);
    printf("A maior média geral foi de %s. Média: %.2f\n", (maiorMedia.aluno).nome, maiorMedia.media);
    printf("A menor média geral foi de %s. Média: %.2f\n", (menorMedia.aluno).nome, menorMedia.media);
    printf("\nSITUAÇÃO:\n");

    for(int i = 0; i<5; i++){
        printf("MATRÍCULA: %d SITUAÇÃO: %s\n", situacoes[i].matricula, situacoes[i].estado);
    }

    free(alunos);


    return 0;
}