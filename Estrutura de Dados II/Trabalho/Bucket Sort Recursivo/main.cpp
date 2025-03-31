#include <stdio.h>
#include <iostream>

// Função recursiva para realizar o Bucket Sort
void bucketSort(float arr[], int n) {
    // Base da recursão: se o array tiver 1 ou 0 elementos, já está ordenado
    if (n <= 1) {
        return;
    }

    // Determinar o valor máximo no array para normalizar os índices
    float maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // 1) Criar buckets vazios
    constexpr int maxBuckets = 100; // Número máximo de buckets
    float buckets[maxBuckets][100]; // Supondo no máximo 100 elementos por bucket
    int tamanhosBuckets[maxBuckets] = {0}; // Inicializa o tamanho de cada bucket como 0

    // 2) Colocar os elementos do array nos buckets apropriados
    for (int i = 0; i < n; i++) {
        // Normaliza o valor e calcula o índice do bucket
        int indiceBucket = (int)((arr[i] / maxVal) * (maxBuckets - 1));
        buckets[indiceBucket][tamanhosBuckets[indiceBucket]] = arr[i];
        tamanhosBuckets[indiceBucket]++;
    }

    // 3) Ordenar cada bucket recursivamente usando Bucket Sort
    int indice = 0; // Índice para o array original
    for (int i = 0; i < maxBuckets; i++) {
        if (tamanhosBuckets[i] > 0) { // Apenas processa buckets não vazios
            bucketSort(buckets[i], tamanhosBuckets[i]); // Chamada recursiva para ordenar o bucket

            // 4) Concatenar os elementos ordenados de volta no array original
            for (int j = 0; j < tamanhosBuckets[i]; j++) {
                arr[indice++] = buckets[i][j];
            }
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
