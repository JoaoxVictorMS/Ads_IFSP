#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float precPro, precReaj, precFim;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o preço do produto:");	
	scanf("%f", &precPro);
	precReaj = 0.15 * precPro;
	precFim = precReaj + precPro;
	printf("O preço do produto com o reajuste de 15 por cento é: %6.2f\n",precFim);
	system ("pause");
	return 0;
}
