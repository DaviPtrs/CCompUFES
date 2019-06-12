#ifndef _CALC_H_
#define _CALC_H_
#include "pilha.h"

int convertCharToNum(char c);

int isOp(char c);

void opera(tPilha *, char);

int calcIni(char *, int, tPilha *);

void printResultado(tPilha *);

#endif /* _CALC_H_ */
