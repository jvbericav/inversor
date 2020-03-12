/* Data de submissao: 11/03/2020
 * Nome: João Vitor Berica Vicente
 * RA: 199867
 */

#include <stdio.h>
#define TAM_PILHA 100

typedef struct {
	char dados[TAM_PILHA];
	int n;
} pilha, *Pilha;

void pilha_init(Pilha p) {
	p->n = 0;
}

void push(Pilha p, char c) {
	if (p->n < TAM_PILHA) {
		p->dados[p->n]=c;
		(p->n)++;
	}
}

char pop(Pilha p) {
	char c;
	if ((p->n)>0) {
		(p->n)--;
		c = p->dados[p->n];
	}
	return c;
}

int main() {
	char buffer[TAM_PILHA];
	pilha p;
	fgets(buffer, TAM_PILHA, stdin);
	pilha_init(&p);

	for(int i=0; buffer[i] != '\n'; i++){
		if(buffer[i] == ' ') {
			if((p.n)>0) {
				while((p.n) > 0 )
					printf("%c", pop(&p));
			}
			printf("%c",buffer[i]);
			
		} else {
			push(&p, buffer[i]);
		}
	}

	while((p.n) > 0 )
		printf("%c", pop(&p));
	printf("\n");

  return 0;
}













