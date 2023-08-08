#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 42;
	int *ptr1 = &valor;
	int **ptr2 = &ptr1;
	
	printf("Valor:  %d\n", **ptr2);
	
	
	
	
	
	
	
	
	
	return 0;
}
