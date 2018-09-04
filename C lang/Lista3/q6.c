#include <stdio.h>
#include <stdlib.h>

void main(){
    int idade, IdAlunMVelho = 0, IdMelhorAluno;
    float nota, melhorNota = 0, notaAlunMVelho;
    while (1){
        printf("Digite a idade e a nota do aluno: ");
        scanf("%d %f", &idade, &nota);

        if (nota < 0) break;

        if (nota > melhorNota){
            melhorNota = nota;
            IdMelhorAluno = idade;
        }
        if (idade > IdAlunMVelho){
            IdAlunMVelho = idade;
            notaAlunMVelho = nota;
        }
    }
    puts("\n=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("Idade do aluno com a maior nota: %d\n", IdMelhorAluno);
    printf("Nota do aluno mais velho: \t%.2f\n", notaAlunMVelho);
}