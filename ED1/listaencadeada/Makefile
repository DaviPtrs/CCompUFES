CC=gcc
CFLAGS=-I. -Wall  -lm -g -O3
DEPS = listaencadeada.h
OBJ = proglista_produto.o listaencadeada.o

all: proglista_produto clean run

run:
	./proglista_produto

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


ListaProduto: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
