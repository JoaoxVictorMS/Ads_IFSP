#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float num1, num2, num3, num4;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o primeiro número:");
	scanf("%f", &num1);
	printf("Digite o segundo número:");
	scanf("%f", &num2);
	printf("Digite o terceiro número:");
	scanf("%f", &num3);
	printf("Digite o quarto número:");
	scanf("%f", &num4);
	if(!(num1 < num2 && num2 < num3)){
		printf("Os três primeiros números não estão em ordem crescente.");
	} else if(num4 > num1 && num4 > num2 && num4 > num3){
		printf("Os números em ordem decrescente são: %6.2f %6.2f %6.2f %6.2f", num4, num3, num2, num1);
	} else {
		printf("Os números em ordem decrescente são: %6.2f %6.2f %6.2f %6.2f", num3, num2, num1, num4);
	}
	return 0;
}
