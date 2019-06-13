CC=gcc
CFLAGS=-I. -Wall  -lm
DEPS = listaencadeada.h ArvoreBinaria.h ArvoreAVL.h
OBJLISTA = testLista.o listaencadeada.o

OBJARV = testArvoreBinaria.o ArvoreBinaria.o

OBJAVL = testeArvoreAVL.o ArvoreAVL.o

%.o: %.c $(DEPSLISTA)
	$(CC) -c -o $@ $< $(CFLAGS)


DesempenhoLista: $(OBJLISTA) clean
	$(CC) -o $@ $^ $(CFLAGS)

DesempenhoArvore: $(OBJARV) clean
	$(CC) -o $@ $^ $(CFLAGS)

DesempenhoAVL: $(OBJAVL) clean
	$(CC) -o $@ $^ $(CFLAGS)

all: DesempenhoLista DesempenhoArvore DesempenhoAVL

clean:
	rm -f *.o
