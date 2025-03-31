#include <iostream>

// Função para trocar dois elementos
void troca(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Realiza o heapify de uma subárvore com raiz "raiz" que é um índice da lista[]. 
// "tamanhoheap" é o tamanho do heap.
void heapfy(int *lista, int tamanhoheap, int raiz, int &comps, int &trocas) {
    // Inicializa o maior como a raiz
    int maior = raiz; 
    int filhoEsquerdo = 2 * raiz + 1; // Filho esquerdo
    int filhoDireito = 2 * raiz + 2;  // Filho direito

    // Verifica se o filho esquerdo é maior que a raiz
    if (filhoEsquerdo < tamanhoheap && lista[filhoEsquerdo] > lista[maior]) {
        maior = filhoEsquerdo;
    }

    // Verifica se o filho direito é maior que o atual maior
    if (filhoDireito < tamanhoheap && lista[filhoDireito] > lista[maior]) {
        maior = filhoDireito;
    }

    // Se o maior não é a raiz
    if (maior != raiz) {
        comps++;
        troca(lista[raiz], lista[maior]);

        // Chama recursivamente o heapify na subárvore afetada
        heapfy(lista, tamanhoheap, maior, comps, trocas);
    }
}

// Função para realizar o Heap Sort
void heapSort(int lista[], int tamanhoheap, int &comps, int &trocas) {
    // Constrói o heap
    for (int i = tamanhoheap / 2 - 1; i >= 0; i--) {
        heapfy(lista, tamanhoheap, i, comps, trocas);
    }

    // Extrai os elementos do heap um por um
    for (int i = tamanhoheap - 1; i > 0; i--) {
        // Move a raiz atual para o final
        troca(lista[0], lista[i]);
        trocas++;

        // Chama o heapify no heap reduzido
        heapfy(lista, i, 0, comps, trocas);
    }
}

int main() {
    constexpr int n = 9; 
    int lista[n] = {5, 13, 2, 25, 7, 17, 20, 8, 4};
    int comps = 0, trocas = 0;

    /*
    srand(time(0));
    // Preencher a lista com números aleatórios entre 1 e 1000
    for (int i = 0; i < n; i++) {
        lista[i] = rand() % 1000000 + 1;
    }
    */

    // Ordena a lista usando Heap Sort
    heapSort(lista, n, comps, trocas);

    std::cout << "Elementos ordenados: ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Quantidade de comparacoes: " << comps << std::endl;
    std::cout << "Quantidade de trocas: " << trocas << std::endl;

    return 0;
}
