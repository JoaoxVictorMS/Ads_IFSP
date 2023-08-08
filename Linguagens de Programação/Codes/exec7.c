#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    float x, y, z;
    
    setlocale(LC_ALL, "Portuguese");
	
	printf("\n---------- Seja bem vindo ao ByteTriangle! -----------\n\n");
    printf("\nDigite o comprimento do lado X do triângulo: ");
    scanf("%f", &x);

    printf("\nDigite o comprimento do lado Y do triângulo: ");
    scanf("%f", &y);

    printf("\nDigite o comprimento do lado Z do triângulo: ");
    scanf("%f", &z);
    
    printf("\nLendo os valores...\n");
    printf("\nDetectando o triângulo correspondente...\n");
    printf("\nTriângulo detectado:\n");

    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        if (x == y && y == z) {
            printf("\nTriângulo Equilátero\n");
        } else if (x == y || x == z || y == z) {
            printf("\nTriângulo Isósceles\n");
        } else {
            printf("\nTriângulo Escaleno\n");
        }
    } else {
        printf("\nOs lados não formam um triângulo.\n");
    }

    return 0;
}

