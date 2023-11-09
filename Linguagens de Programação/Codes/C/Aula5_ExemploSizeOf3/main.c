#include <stdio.h>

struct Exemplo {
    int numero;
    char caractere;
    float decimal;
};

int main() {
    struct Exemplo exemplo;
    printf("Tamanho de exemplo: %zu bytes\n", sizeof(exemplo));

    return 0;
}




