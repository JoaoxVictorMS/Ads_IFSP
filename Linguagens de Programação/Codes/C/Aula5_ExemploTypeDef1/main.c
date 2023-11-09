/*
#include <stdio.h>

typedef int MeuInteiro;

int main() {
    MeuInteiro numero = 42;
    printf("Número: %d\n", numero);

    return 0;
}


#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

int main() {
    Data hoje = {10, 8, 2023};
    printf("Data: %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}
*/

#include <stdio.h>

typedef int* PonteiroInteiro;

int main() {
    int numero = 42;
    PonteiroInteiro ptr = &numero;

    printf("Valor: %d\n", *ptr);

    return 0;
}






