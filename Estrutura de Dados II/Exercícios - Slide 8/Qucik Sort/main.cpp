#include <iostream>

// Função para trocar dois elementos no array
void trocar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para particionar o array
int particionar(int arr[], int inicio, int fim) {
    int pivo = arr[fim]; // Escolhe o último elemento como pivô
    int i = inicio - 1;  // Índice para elementos menores que o pivô

    // Varre o array e reorganiza os elementos
    for (int j = inicio; j < fim; j++) {
        if (arr[j] <= pivo) {
            i++;
            trocar(arr[i], arr[j]); // Move elemento menor que o pivô para a esquerda
        }
    }

    // Coloca o pivô na posição correta
    trocar(arr[i + 1], arr[fim]);
    return i + 1; // Retorna a posição final do pivô
}

// Função recursiva para aplicar o Quicksort
void quicksort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        // Particiona o array e obtém o índice do pivô
        int indicePivo = particionar(arr, inicio, fim);

        // Ordena as subárvores à esquerda e à direita do pivô
        quicksort(arr, inicio, indicePivo - 1); // Subárvore esquerda
        quicksort(arr, indicePivo + 1, fim);   // Subárvore direita
    }
}

// Função para exibir o array
void exibirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Array de teste
    int arr[] = {2, 8, 7, 1, 3, 5, 6, 4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    // Exibir o array antes da ordenação
    std::cout << "Array antes da ordenação: ";
    exibirArray(arr, tamanho);

    // Aplicar o Quicksort
    quicksort(arr, 0, tamanho - 1);

    // Exibir o array após a ordenação
    std::cout << "Array após a ordenação: ";
    exibirArray(arr, tamanho);

    return 0;
}
