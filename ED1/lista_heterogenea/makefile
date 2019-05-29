
### Makefile ###
# diz que o programa é em C e deve usar o GCC
CC=gcc
# liga algumas flags de warn, mas não todas
CFLAGS= -g -Wall 
OBJ= listahet.o proglistahet.o

all: main
	-rm ${OBJ}

main: ${OBJ}
	$ ${CC} -o proglistahet ${OBJ} -lm ${CFLAGS}

listahet.o: listahet.c
	$ ${CC} -c listahet.c ${CFLAGS}

proglistahet.o: proglistahet.c
	$ ${CC} -c proglistahet.c ${CFLAGS}
	
run: all
	$ ./proglistahet

val: all
	$ valgrind --leak-check=full ./proglistahet
	