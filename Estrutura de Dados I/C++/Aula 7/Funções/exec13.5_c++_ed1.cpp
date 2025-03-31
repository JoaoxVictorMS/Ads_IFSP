#include <iostream>
#define TAM 5
using namespace std;

void potenciacao(int *vetor, int tamanho){
  
  for (int i = 0; i < tamanho; i++){
    vetor[i] *= vetor[i];
    cout << vetor[i] << " ";
  }
  
}


int main() {
  int meuVetor[TAM] = {2, 4, 6, 8, 10};
  cout << "Quadrado dos valores do vetor :";
  potenciacao(meuVetor, TAM);
  return 0;
}