#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float num1, num2, num3, maior;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o primeiro número:");	
	scanf("%f", &num1);
	printf("Informe o segundo número:");	
	scanf("%f", &num2);
	printf("Informe o terceiro número:");	
	scanf("%f", &num3);
	if(num1 >= num2 && num1 >= num3)
	{
		maior = num1;
	} else if (num2 >= num1 && num2 >= num3)
	{
		maior = num2;
	} else {
		maior = num3;
	}
	printf("O maior número é: %6.2f\n", maior);
	return 0;
}
