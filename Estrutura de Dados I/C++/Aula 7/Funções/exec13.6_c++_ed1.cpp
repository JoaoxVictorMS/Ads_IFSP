#include <iostream>

using namespace std;

void DuplicaElementoMatriz(int **matriz, int tamanho) {


  /*
  for (int i = 0; i < tamanho; i++)
  cout << vetor[i] << " ";
  cout << endl;
  */

  
  for (int i = 0; i < tamanho; i++){
    for(int j = 0; j < tamanho; j++){
      matriz[i][j] *= 2;
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  
}

int main() {
  const int tamanhoMatriz = 5;
  int *minhaMatriz[tamanhoMatriz]; //  Vetor de ponteiros para cada vetor de inteiros
  int valores[tamanhoMatriz][tamanhoMatriz] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
  };

  //  Atribuindo cada ponteiro do vetor de ponteiros para um vetor de inteiros
  for (int i = 0; i < tamanhoMatriz; i++) {
      minhaMatriz[i] = valores[i];
  }
  
  cout << "\nDobro dos elementos da matriz: ";
  DuplicaElementoMatriz(minhaMatriz, tamanhoMatriz);
  return 0;
}