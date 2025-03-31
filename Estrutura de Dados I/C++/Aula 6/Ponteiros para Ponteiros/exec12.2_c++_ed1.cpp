#include <iostream>
using namespace std;

int main() {
  int IntVar1 = 3, IntVar2 = 3, IntVar3 = 3;

  cout << ""
  

  int ***matriz = new int**[IntVar1]; // Alocando um vetor de ponteiros

  
  int valor = 1; // Valor inicial a ser inserido na matriz
  for (int i = 0; i < IntVar1; ++i) {
      matriz[i] = new int*[IntVar2];
      for (int j = 0; j < IntVar2; ++j) {
          matriz[i][j] = new int[IntVar3];
          for (int k = 0; k < IntVar3; ++k) {
              matriz[i][j][k] = valor++; // Preenchendo a matriz sequencialmente
          }
      }
  }
  

  // Preenchendo e imprimindo a matriz resultante
  for (int i = 0; i < IntVar1; i++) {
    for (int j = 0; j < IntVar2; j++) {
      for(int k = 0; k < IntVar3; k++){
        cout << matriz[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  // Liberando a memória
  for (int i = 0; i < IntVar1; i++) {
    for (int j = 0; j < IntVar2; j++){
      delete[] matriz[i][j];
    }
    delete[] matriz[i];
  }
  delete[] matriz;
  
  return 0;
}