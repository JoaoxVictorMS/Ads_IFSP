#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float precPro, percPro, valDesc, precFim;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o preço do produto:");
	scanf("%f", &precPro);
	printf("Informe o percentual de desconto:");
	scanf("%f", &percPro);
	valDesc = precPro * (percPro/100);
	precFim = precPro - valDesc;
	printf("O valor de desconto é:%6.2f\n",valDesc);
	printf("O preço do produto com desconto é:%6.2f\n",precFim);
	system ("pause");
	return 0;
}
