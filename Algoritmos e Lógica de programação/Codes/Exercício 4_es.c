#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int ano, resto_100;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o ano que deseja verificar:");
	scanf("%d", &ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) { /* As duas primeiras condições devem ser satisfeitas obrigatoriamente, a última é apenas uma possibilidade */
		printf("O ano informado é bissexto");
	} else {
		printf("O ano informado não é bissexto");
	}
}
