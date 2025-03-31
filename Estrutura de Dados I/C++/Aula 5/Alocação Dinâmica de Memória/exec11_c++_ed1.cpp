#include <iostream>
using namespace std;
int main() {
  int numVet, soma=0;
  int *vetor; 
  // vetor = new int[numVet];
  cout << "Insira o número de posições do vetor: ";
  cin >> numVet;
  vetor = new int[numVet];
  for (int i = 0; i < numVet; i++ ){
    cout << "Insira valores para seu vetor: ";
    cin >> vetor[i];
    soma += vetor[i];
  }
   cout << "A soma dos valores do vetor é: " << soma << endl;
};