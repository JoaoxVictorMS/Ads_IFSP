#include <iostream>

using namespace std;

void MenorValor(int *vetor, int tamanho) {
  
  
  /*
  for (int i = 0; i < tamanho; i++)
  cout << vetor[i] << " ";
  cout << endl;
  */
  
  int menor = vetor[0];
  for (int i = 1; i < tamanho; i++){
    if (vetor[i] < menor)
      menor = vetor[i];
      
  }
  cout << menor << endl;
}

int main() {
  const int tamanhoVetor = 5;
  int meuVetor[tamanhoVetor] = {10, 20, 30, 40, 50};
  cout << "Menor valor do vetor: ";
  MenorValor(meuVetor, tamanhoVetor);
  return 0;
}