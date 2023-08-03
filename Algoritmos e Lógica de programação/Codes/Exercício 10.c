#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float infoPes, convPol, convJarda, convMilha;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe um valor em pés para ser convertido:");	
	scanf("%f", &infoPes);
	convPol = infoPes * 12;
	convJarda = infoPes / 3;
	convMilha = infoPes / 5280;
	printf("O valor em pés dado, convertido para polegadas, é de: %f\n",convPol);
	printf("O valor em pés dado, convertido para jardas, é de: %f\n",convJarda);
	printf("O valor em pés dado, convertido para milhas, é de: %f\n",convMilha);
	system ("pause");
	return 0;
}
