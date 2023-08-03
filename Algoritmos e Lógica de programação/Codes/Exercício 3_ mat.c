#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int matriz[4][3],i,j,count[4]={0},soma=0,quantidade=0;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] >= 10 && matriz[i][j] <= 20) {
                count[i]++;
            }
        }
    }
    
    printf("\nQuantidade de elementos entre 10 e 20 em cada linha:\n");
    for (i = 0; i < 4; i++) {
        printf("Linha %d: %d\n", i, count[i]);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                soma += matriz[i][j];
                quantidade++;
            }
        }
    }
    
    if (quantidade > 0) {
        float media = (float) soma / quantidade;
        printf("\nMédia dos elementos pares: %.2f\n", media);
    } else {
        printf("\nNão há elementos pares na matriz.\n");
    }

    return 0;
}
