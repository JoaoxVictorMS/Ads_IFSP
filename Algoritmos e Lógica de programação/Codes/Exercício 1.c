#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float x, y, result;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro numero da soma:");
	scanf("%f", &x);
	printf("Digite o segundo numero da soma:");
	scanf("%f", &y);
	result = x + y;
	printf("A soma de %f com %f é: %f\n", x, y, result);


	printf("Digite o primeiro numero da subtracao:");
	scanf("%f", &x);
	printf("Digite o segundo numero da subtracao:");
	scanf("%f", &y);
	result = x - y;
	printf("A subtracao de %d por %f é: %f\n", x, y, result);

	printf("Digite o primeiro numero da divisao:");
	scanf("%f", &x);
	printf("Digite o segundo numero da divisao:");
	scanf("%f", &y);
	result = x / y;
	printf("A divisao de %f por %f é: %f\n", x, y, result);
	
	printf("Digite o primeiro numero da multiplicacao:");
	scanf("%f", &x);
	printf("Digite o segundo numero multiplicacao:");
	scanf("%f", &y);
	result = x * y;
	printf("A multiplicacao de %f por %f é: %f\n", x, y, result);
	
	system("Pause");
	return 0 ;

}
