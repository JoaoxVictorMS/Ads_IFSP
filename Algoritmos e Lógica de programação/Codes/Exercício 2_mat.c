#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, contador;
	int mat[3][4];	
	
	contador = 0;
		
	printf("Informe os elementos inteiros para a matriz:\n");
	
	for(i=0; i < 3; i++)
	{
		for(j=0; j < 4; j++)
		{
			printf("Elemento %d %d: ", i, j);
			scanf("%d", &mat[i][j]);	
		}
	}
	
	for(i=0; i < 3; i++)
	{
		for(j=0; j < 4; j++)
		{
			if (mat[i][j] >= 15 && mat[i][j] <= 20)
			{ 
				contador++;
			}
		}	
	}
	
	printf("A quantidade de elementos entre 15 e 20 na matriz é: %d\n", contador);
	
system("pause");
return 0;
}
