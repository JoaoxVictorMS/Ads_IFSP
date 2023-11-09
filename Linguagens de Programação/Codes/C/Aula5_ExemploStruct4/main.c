#include <stdio.h>
#include <string.h>

// Definição da estrutura
struct Pessoa {
    char nome[50];
    int idade;
};

// Função que recebe uma estrutura como parâmetro
void imprimirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}

int main() {
    // Criando uma estrutura e preenchendo seus dados
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Edinaldo");
    pessoa1.idade = 60;

    // Chamando a função para imprimir os dados da estrutura
    imprimirPessoa(pessoa1);

    return 0;
}



