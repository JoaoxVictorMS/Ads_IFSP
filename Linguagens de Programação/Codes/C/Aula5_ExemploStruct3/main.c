#include <stdio.h>
#include <string.h>

// Definição da estrutura
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
	int i;
	
    // Criando uma matriz de estruturas
    struct Pessoa pessoas[3];

    // Preenchendo os dados das pessoas na matriz
    strcpy(pessoas[0].nome, "Cidinha");
    pessoas[0].idade = 65;

    strcpy(pessoas[1].nome, "Patricia");
    pessoas[1].idade = 30;

    strcpy(pessoas[2].nome, "Carol");
    pessoas[2].idade = 22;

    // Imprimindo os dados das pessoas na matriz
    for (i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("\n");
    }

    return 0;
}

