#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float precoFab, percLucro, percImps, lucroDist, valorImps, valorFinal;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o preço de fábrica do veículo:");
	scanf("%f", &precoFab);
	printf("Informe o percentual de lucro:");
	scanf("%f", &percLucro);
	printf("Informe o percentual de impostos:");
	scanf("%f", &percImps);
	lucroDist = precoFab * (percLucro/100);
	valorImps = precoFab * (percImps/100);
	valorFinal = precoFab + lucroDist + valorImps;
	printf("O lucro do distribuidor é:%6.2f\n",lucroDist);
	printf("O valor do imposto é:%6.2f\n",valorImps);
	printf("O preço final do veículo é:%6.2f\n",valorFinal);
	system ("pause");
	return 0;
}
