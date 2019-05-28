#ifndef PILHA_H_
#define PILHA_H_

typedef struct celulaPilha celulaPilha;

struct celulaPilha{
	int num;
	celulaPilha* prox;
};

typedef struct{
	celulaPilha *Base;
	celulaPilha *Topo;
} tPilha;

celulaPilha *criaCelula(int n);

tPilha *criaPilha();

int pilhaVazia(tPilha *moura);

void liberaPilha(tPilha *);

int push(tPilha *energizer);

int pop(tPilha *duracel);

#endif /* PILHA_H_ */
