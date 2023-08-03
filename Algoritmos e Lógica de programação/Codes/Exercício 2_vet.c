#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, aluno_med;
	float vet[10], soma, media;
	
	soma = 0; // Armazena o valor da soma de todos os valores do vetor. Deve se inicar no zero uma vez que irá passar por um laço
	aluno_med = 0; // Armazena o número de alunos com nota acima da média. Deve se inicar no zero uma vez que irá passar por um laço
	
	printf ("Informe as 10 notas\n");
	for (i=0; i < 10; i++){
		printf("Digite a nota %d: ", i+1); // O i+1 adiciona mais um número na hora de imprimir qual é a posição do número solicitado 
		scanf ("%f", &vet[i]);
		soma += vet[i];
	}
	
media = soma/10;
printf("A média é de: %6.2f", media);
	
	for(i=0; i < 10; i++){
		if (vet[i] > media){
			aluno_med++;
		}	
	}

printf("\nQuantidade de alunos com nota superior a média : %d\n", aluno_med);

system("pause");
return 0;
}
