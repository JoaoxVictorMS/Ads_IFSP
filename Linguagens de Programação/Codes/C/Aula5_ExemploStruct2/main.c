#include <stdio.h>
#include <string.h>

// Definição da estrutura
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    // Inicialização da primeira struct
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Vanessa");
    pessoa1.idade = 29;

    // Atribuição da primeira struct para a segunda struct
    struct Pessoa pessoa2 = pessoa1;

    // Imprimindo os dados da segunda struct
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d\n", pessoa2.idade);

    return 0;
}




