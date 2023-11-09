#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int contagem = 36453;
	int *n;
	int q;
	
	n = &contagem;
	q = *n;
	
	n = n;
	
	printf("Posição da variável contagem;  %d\n", n);
	printf("Valor da variável contagem;  %d\n", q);
	
}
