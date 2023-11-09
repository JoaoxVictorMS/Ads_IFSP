#include <stdio.h>
#include <string.h>

// Definição da estrutura
struct EnderecoPostal {
    char nome[50];
    char endereco[100];
    char cidade[20];
    char estado[2];
    int cep;
};

int main() {
    // Declaração e inicialização de uma struct
    struct EnderecoPostal endereco1;
    strcpy(endereco1.nome, "Joao Silva");
    strcpy(endereco1.endereco, "Rua A, n 123");
    strcpy(endereco1.cidade, "Catanduva");
    strcpy(endereco1.estado, "SP");
    endereco1.cep = 15804080;

    // Imprimindo os dados da struct
    printf("Nome: %s\n", endereco1.nome);
    printf("Endereco: %s\n", endereco1.endereco);
    printf("Cidade: %s\n", endereco1.cidade);
    printf("UF: %s\n", endereco1.estado);
    printf("CEP: %d\n", endereco1.cep);

    return 0;
}

