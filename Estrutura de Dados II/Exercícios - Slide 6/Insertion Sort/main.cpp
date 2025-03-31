#include <stdio.h>
#include <iostream>

void InsertionSort(int *lista, int tamanho, int &comparacoes, int &trocas) {
    int j, item;
    comparacoes = 0;
    trocas = 0;
    // Varre a lista; i = 1 pois começa do segundo item
    for (int i = 1; i < tamanho; i++) {  
        item = lista[i];
        j = i - 1;

        // Comparação dentro do while para deslocamento
        while (j >= 0 && lista[j] > item) {
            lista[j + 1] = lista[j];
            j = j - 1;
            // Conta o deslocamento como troca
            trocas++; 
            // Conta a comparação dentro do while
            comparacoes++;        
        }

        // Conta a comparação que falhou no while (se o elemento não foi deslocado)
        if (j >= 0) {
            comparacoes++;  
        }

        // Realiza a inserção do item
        lista[j + 1] = item; 
    }
}

int main() {
    
    /*
    constexpr int n = 6;
    int lista[n] = {6, 5, 4, 3, 2, 1};
    */
    
    
    constexpr int n = 1000000;
    int lista[n];
    int comps = 0, trocas = 0;
    InsertionSort(lista, n, comps, trocas);
    
    
    srand(time(0));
    // Preencher a lista com números aleatórios entre 1 e 1000
    for (int i = 0; i < n; i++) {
        lista[i] = rand() % 1000000 + 1;
    }
    
    
    std::cout << "Elementos ordenados: ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Quantidade de comparacoes: " << comps << std::endl;
    std::cout << "Quantidade de trocas: " << trocas << std::endl;

    return 0;
}
