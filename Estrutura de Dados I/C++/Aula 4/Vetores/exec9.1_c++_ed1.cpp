#include <iostream>
using namespace std;
int main() {
  int vet[10], soma = 0;
  cout << "Digite 10 elementos inteiros: " << endl;
  for (int i=0; i<10; i++){
    cout << "Elemento: ";
    cin >> vet[i];
    soma += vet[i];
  }
  cout << "A soma dos elementos é: " << soma;
}