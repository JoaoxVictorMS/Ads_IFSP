#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int nasc, antual, idade, idade2050;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe seu ano de nascimento:");
	scanf("%d", &nasc);
	printf("Informe o ano atual:");
	scanf("%d", &antual);
	idade = antual - nasc;
	printf("Sua idade é:%d\n",idade);
	idade2050 = idade + (2050 - antual);
	printf("Sua idade em 2050 será de:%d",idade2050);
}
