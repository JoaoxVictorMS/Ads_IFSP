#include <stdio.h>

// Definindo uma enumeração chamada "Status"
enum Status {
    Inativo,
    Ativo,
    Pausado
};

int main() {
    enum Status estado = Ativo;

    if (estado == Ativo) {
        printf("O sistema está ativo.\n");
    } else {
        printf("O sistema não está ativo.\n");
    }

    return 0;
}


