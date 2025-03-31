#include <iostream>
using namespace std;

int main() {
    int numLinhas;

    // Solicita ao usuário que digite um número entre 1 e 9
    cout << "Digite um número entre 1 e 9: ";
    cin >> numLinhas;

    // Verifica se o número está no intervalo válido
    if (numLinhas < 1 || numLinhas > 9) {
        cout << "Número inválido! Por favor, digite um número entre 1 e 9." << endl;
        return 1; // Retorna 1 para indicar um erro
    }

    // Loop para iterar sobre as linhas
    for (int i = 1; i <= numLinhas; i++) {
        // Loop para imprimir espaços em branco
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        // Imprime o número atual
        cout << i;

        // Loop para imprimir espaços em branco
        for (int k = numLinhas - 1; k >= i; k--) {
            cout << "  ";
        }

        // Se não for a última linha, imprime novamente o número atual
        if (i < numLinhas) {
            cout << i;
        }
        cout << endl;
    }

    return 0; // Retorna 0 para indicar sucesso
}
