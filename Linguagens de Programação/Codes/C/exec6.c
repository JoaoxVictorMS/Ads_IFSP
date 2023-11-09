#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int numDado, numLados;
	
	
	printf("\n---------- Seja bem vindo ao ByteDice! -----------\n\n");
    printf("\nDigite o número de dados que desejar rolar:");
    scanf("%d", &numDado);

    printf("\nDigite o número de lados em cada dado:");
    scanf("%d", &numLados);

    srand(time(NULL));

    int soma = 0;
    int i;
    printf("\nCalculando os resultados...\n");
    printf("\nResultados dos lançamentos:\n");

    for (i = 0; i < numDado; i++) {
        int result = rand() % numLados + 1;
        printf("Dado %d: %d\n", i + 1, result);
        soma += result;
    }
	
	printf("\nSomando o total dos resultados anteriores...\n");
    printf("\nSoma total dos resultados: %d\n", soma);

    return 0;
}

