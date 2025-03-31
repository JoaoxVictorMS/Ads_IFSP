#include <stdio.h>
#include <iostream>

// Função para ordenar os elementos dentro de um bucket usando Insertion Sort
void insertionSort(float bucket[], int tamanho) {
    // Iterar sobre os elementos do bucket
    for (int i = 1; i < tamanho; i++) {
        float item = bucket[i]; // Armazena o item a ser inserido
        int j = i - 1;

        // Desloca os elementos maiores para frente
        while (j >= 0 && bucket[j] > item) {
            bucket[j + 1] = bucket[j];
            j--;
        }

        // Insere o item na posição correta
        bucket[j + 1] = item;
    }
}

// Função Bucket Sort
void bucketSort(float arr[], int n) {
    // 1) Criar buckets vazios
    float buckets[100][100]; // Supondo um limite de 100 buckets com 100 elementos cada
    int tamanhosBuckets[100] = {0}; // Inicializa o tamanho de cada bucket como 0

    // 2) Colocar os elementos do array nos buckets apropriados
    for (int i = 0; i < n; i++) {
        int indiceBucket = n * arr[i]; // Calcula o índice do bucket baseado no valor
        buckets[indiceBucket][tamanhosBuckets[indiceBucket]] = arr[i]; // Insere o elemento no bucket
        tamanhosBuckets[indiceBucket]++; // Incrementa o contador do bucket
    }

    // 3) Ordenar individualmente cada bucket usando Insertion Sort
    for (int i = 0; i < n; i++) {
        if (tamanhosBuckets[i] > 0) { // Só ordena buckets não vazios
            insertionSort(buckets[i], tamanhosBuckets[i]);
        }
    }

    // 4) Concatenar todos os buckets de volta no array original
    int indice = 0; // Índice para o array original
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < tamanhosBuckets[i]; j++) {
            arr[indice++] = buckets[i][j]; // Copia os elementos do bucket para o array
        }
    }
}

int main() {
    // Define o tamanho do array
    constexpr int tamanho = 10;
    float lista[tamanho] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434, 0.75, 0.22, 0.14, 0.99};

    // Exibir os elementos antes da ordenação
    std::cout << "Elementos antes da ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar os elementos usando Bucket Sort
    bucketSort(lista, tamanho);

    // Exibir os elementos após a ordenação
    std::cout << "Elementos ordenados: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
