#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int x = 10;
	int *ptr = &x;
	
	printf("Valor original:  %d\n", *ptr); //10
	
	
	// Incremento
	
	ptr = ptr + 1;
	printf("Valor após avançar:  %d\n", *ptr); // Alocado
	
	
	// Decremento
	
	ptr = ptr - 1;
	printf("Valor após retroceder:  %d\n", *ptr); // Alocado
	
	
	
	return 0;

	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

