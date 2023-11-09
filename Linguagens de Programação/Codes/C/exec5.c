#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TAMANHO_MAXIMO 100


void criaSenhaAleatoria(int tamanho) {
    const char caracter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:,.<>?";
    int tamanhoCaracteres = sizeof(caracter) - 1;

    srand(time(NULL));

	int i;
	printf("\nGerando sua senha...\n");
    printf("\nSenha aleatória: ");
    for (i = 0; i < tamanho; i++) {
        char caracterAleatorio = caracter[rand() % tamanhoCaracteres];
        printf("%c", caracterAleatorio);
    }
    printf("\n");
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int tamanho;

	printf("\n---------- Seja bem vindo ao BytePassword! -----------\n\n");
    printf("Informe o comprimento da senha desejada: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > TAMANHO_MAXIMO) {
        printf("Comprimento inválido. Deve estar entre 1 e %d.\n", TAMANHO_MAXIMO);
        return 1;
    }

    criaSenhaAleatoria(tamanho);

    return 0;
}

