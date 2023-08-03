#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10], imp, par;
	
	par = 0; // Armazena todos os números pares após a condição ser atendida. Deve se inicar no zero uma vez que irá passar por um laço
	imp = 0;// Armazena todos os números ímpares após a condição ser atendida. Deve se inicar no zero uma vez que irá passar por um laço
	
	/* Solicita valores ao usuário 10 vezes usando um laço*/
	printf ("Informe 10 elementos inteiros\n");
	for (i=0; i < 10; i++){
		printf("Digite o elemento %d: ", i+1); // O i+1 adiciona mais um número na hora de imprimir qual é a posição do número solicitado 
		scanf ("%d", &vet[i]);
	}
	
	/* Verifica quais números são pares através do resto da divisão por 2 e imprime quais são */
	printf("\nNúmeros pares: ");
	for(i=0; i < 10; i++){
		if (vet[i] % 2 == 0){ // Verfica se cada índice do vetor terá um resto diferente de zero quando divido por 2
			printf("%d", vet[i]); // Após feito o printf("\nNúmeros pares: ") será impresso cada item par, lado a lado, através do laço
			par++; 
			printf(",");	
		}	
	}
	
/* Imprime a quantidade de números pares*/
printf("\nQuantidade de números pares: %d\n", par);

	/* Verifica quais números são ímpares através do resto da divisão por 2, queve ser diferente de 0, e imprime quais são */
	printf("\nNúmeros ímpares: ");
	for(i=0; i < 10; i++){
		if (vet[i] % 2 != 0){
			printf("%d", vet[i]);
			imp++;
			printf(",");	
		}
	}
	
	/* Imprime a quantidade de números ímpares*/
printf("\nQuantidade de números ímpares: %d\n", imp);
	
				
system("pause");
return 0;
}
