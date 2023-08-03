#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float peso, custo;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o peso em quilos do pacote:");
	scanf("%f", &peso);
	if (peso <= 1.0 )
	{
		custo = 10.0;		
	} else if (peso > 1.0)
	{
		custo = peso * 7.5;
	} else if (peso > 35.0) 
	{
		custo = 10.0 + peso * 7.5;
	} 
	else if (peso > 50.0)
	{
		printf("Peso inválido. O pacote não pode pesar mais do que 50 kg.\n");
        return 0;
	}
	
	printf("O custo de envio do pacote é: R$ %.2f\n", custo);
    return 0;
}
