#ifndef PILHA_H_
#define PILHA_H_
#define MAXTAM 50

typedef struct celulaPilha celulaPilha;

struct celulaPilha{
	int num;
	celulaPilha* prox;
};

typedef struct{
	celulaPilha *Base;
	celulaPilha *Topo;
} tPilha;

celulaPilha *criaCelula(int);

tPilha *criaPilha();

int pilhaVazia(tPilha *);

void liberaPilha(tPilha *);

void liberaCelula(celulaPilha *);

void push(tPilha *, celulaPilha *);

celulaPilha *pop(tPilha *);

void printPilha(tPilha *);

#endif /* PILHA_H_ */
