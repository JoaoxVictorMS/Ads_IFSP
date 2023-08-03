#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float val1, val2, val3, premioLot, premioPart1, premioPart2, premioPart3;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o valor apostado pelo primeiro participante:");	
	scanf("%f", &val1);
	printf("Informe o valor apostado pelo segundo participante:");	
	scanf("%f", &val2);
	printf("Informe o valor apostado pelo terceiro participante:");	
	scanf("%f", &val3);
	printf("Infome o valor do prêmio ofertado pela loteria:");	
	scanf("%f", &premioLot);
	premioPart1 = premioLot * (val1/100);
	premioPart2 = premioLot * (val2/100);
	premioPart3 = premioLot * (val3/100);
	printf("O prêmio do jogador 1 é de: %6.2f\n",premioPart1);
	printf("O prêmio do jogador 2 é de: %6.2f\n",premioPart2);
	printf("O prêmio do jogador 3 é de: %6.2f\n",premioPart3);
	system ("pause");
	return 0;	
}

