#include <stdio.h>

union Dado {
    int numero;
    char caractere;
    float decimal;
};

int main() {
    union Dado valor;

    valor.numero = 42;
    printf("Número: %d\n", valor.numero);

    valor.caractere = 'A';
    printf("Caractere: %c\n", valor.caractere);

    valor.decimal = 3.14;
    printf("Decimal: %f\n", valor.decimal);

    return 0;
}


