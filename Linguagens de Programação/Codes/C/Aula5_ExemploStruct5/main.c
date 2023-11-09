#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    // Criando uma estrutura
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Apolinario");
    pessoa1.idade = 25;

    // Criando um ponteiro para a struct Pessoa e atribuindo o endereço da pessoa1
    struct Pessoa *ptrPessoa = &pessoa1;

    // Acessando os campos da struct usando o ponteiro
    printf("Nome: %s\n", ptrPessoa->nome);
    printf("Idade: %d\n", ptrPessoa->idade);

    return 0;
}



