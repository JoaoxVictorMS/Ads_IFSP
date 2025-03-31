
#include <stdio.h>
#include <iostream>

void troca(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


// Recebe a lista (ponteiro para a lista) e o tamanho da mesma
void BubbleSort(int *lista, int tamanho, int &comparacoes, int &trocas){
    
    comparacoes = 0;
    trocas = 0;
    
    // Loop que varre todos os itens da lista toda; Para até o tamanho dela
  for(int i = 0; i < tamanho - 1; i++){
      // Loop que realiza as comparações olhando as duplas; Para até o tamanho dela
      for(int j = 0; j < tamanho - 1 - i ; j++){
          comparacoes++;
          if(lista[j] > lista[j + 1]){ // Se o valor do indice for maior que o valor do indice adjacente; j + 1 para pular para o adjacente
              troca(lista[j], lista[j + 1]); // Realiza a troca
              trocas++;
          }
      }
  }

};

int main()
{
  
    /*
    constexpr int n = 6;
    int lista[n] = {6, 5, 4, 3, 2, 1};
    */
    
    constexpr int n = 1000;
    int lista[n];
    int comps = 0, trocas = 0;
    BubbleSort(lista, n, comps, trocas);
    
    
    srand(time(0));
    // Preencher a lista com números aleatórios entre 1 e 1000
    for (int i = 0; i < n; i++) {
        lista[i] = rand() % 1000 + 1;
    }
    
    
    std::cout << "Elementos ordenados: ";
    for (int i = 0; i < n; i++){
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Quantidade de comparacoes: " << comps << std::endl;
    std::cout << "Quantidade de trocas: " << trocas << std::endl;
    return 0;
}