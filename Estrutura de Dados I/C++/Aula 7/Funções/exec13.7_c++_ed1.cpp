#include <iostream>
#define TAM 5
using namespace std;

// Divida o código e partes
// cada função realiza UM processo apenas
// Um para apenas realizar a conta do fatorial
// E outra para realizar a conta para cada item do vetor

int fatorial(int &n){
  int fat = 1;
  for(; n > 1; n--)
  {
    fat = fat * n;
  }
  return fat;
}
void fatorialItensVetor (int *vetor, int tamanho){
  for(int i = 0; i < tamanho; i++){
   // O parâmetro vetor recebe o retorno da função "fatorial" e aplica esse retorno para cada elemento da lista, iterando através do for. O retorno de "fatorial" é o resultado do cálculo fatorial
   vetor[i] = fatorial(vetor[i]);
   cout << vetor[i] << " ";
 }
}



int main() {
  int meuVetor[TAM] = {2, 4, 6, 8, 10};
  cout << "Fatorial dos valores do vetor :";
    fatorialItensVetor(meuVetor, TAM);
  return 0;
}