#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j;
	int mat[4][3];	
	
	printf("Informe os elementos inteiros para a matriz:\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Elemento %d %d: ", i, j);
			scanf("%d", &mat[i][j]);	
		}
	}
	
	printf("\nNúmeros pares: ");
	for(i=0; i < 4; i++)
	{
		for(j=0; j < 3; j++)
		{
			if (mat[i][j] % 2 == 0)
			{ 
				printf("%d", mat[i][j]);
				printf(" ,");	
			}
		}	
	}

system("pause");
return 0;
	
}
