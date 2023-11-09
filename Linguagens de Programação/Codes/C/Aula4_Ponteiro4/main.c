#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10, *ptr = &x;
	
	printf("Valor de x:  %d\n", x);
	printf("Endereço de x:  %d\n", ptr);
	printf("Valor apontado para o ptr:  %d\n", *ptr);
	
	*ptr = 20; // Modifica o valor de x através de ponteiros
	printf("Valor apontado para o ptr:  %d\n", x);
	
	
	return 0;
}
