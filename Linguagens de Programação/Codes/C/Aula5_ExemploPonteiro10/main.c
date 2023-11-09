#include <stdio.h>

// Duas funções simples para fins de exemplo
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int main() {
    // Declaração do ponteiro para função
    int (*operacao)(int, int);

    // Atribuindo o endereço da função 'soma' ao ponteiro
    operacao = soma;

    // Usando o ponteiro para chamar a função 'soma'
    int resultado = operacao(5, 3);
    printf("Resultado da soma: %d\n", resultado);

    // Mudando o ponteiro para apontar para a função 'subtracao'
    operacao = subtracao;

    // Usando o ponteiro para chamar a função 'subtracao'
    resultado = operacao(10, 4);
    printf("Resultado da subtracao: %d\n", resultado);

    return 0;
}


