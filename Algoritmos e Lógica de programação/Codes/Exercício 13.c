#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float ponto1, ponto2, somaTotal, percJog1, percJog2, valorJog1, valorJog2;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe os pontos do primeiro jogador:");	
	scanf("%f", &ponto1);
	printf("Informe os pontos do segundo jogador:");
	scanf("%f", &ponto2);
	somaTotal = ponto1 + ponto2;
	percJog1 = ponto1/somaTotal;
	percJog2 = ponto2/somaTotal;
	valorJog1 = 1000000 * percJog1;
	valorJog2 = 1000000 * percJog2;
	printf("O valor do prêmio do jogador 1 é: %6.2f\n",valorJog1);
	printf("O valor do prêmio do jogador 2 é: %6.2f\n:",valorJog2);
	system ("pause");
	return 0;
}
