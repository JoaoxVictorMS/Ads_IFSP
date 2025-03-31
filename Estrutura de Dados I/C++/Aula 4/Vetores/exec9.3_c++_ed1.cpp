#include <iostream>
using namespace std;


int main() {
  int tam;
  cout << "Informe o tamanho da lista: ";
  cin >> tam;
  int lista[tam];
  int soma_impares = 0;
  int quantidade_impares = 0;
  for (int i = 0; i < tam; i++){
    cout << "Informe o valor para a posição " << i + 1 << " da lista: ";
    cin >> lista[i];
    if (lista[i] % 2 != 0) {
        soma_impares += lista[i];
        quantidade_impares++;
    }
  }
  
  if (quantidade_impares > 0) {
      double media_impares = soma_impares / static_cast<double>(quantidade_impares);
      cout << "A média dos valores ímpares é: " << media_impares << endl;
  } else {
      cout << "Não há valores ímpares no vetor." << endl;
  }
  
}