#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float n1, n2, n3, media;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o primeiro valor:");
	scanf("%f", &n1);
	printf("Informe o segundo valor:");
	scanf("%f", &n2);
	printf("Informe o terceiro valor:");
	scanf("%f", &n3);
	media = (n1 + n2 + n3)/3;
	printf("A média entre %f, %f e %f é:%f\n",n1, n2, n3, media);
}
