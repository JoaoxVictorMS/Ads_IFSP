#include <iostream>
using namespace std;
int main() {
  int vet[10];
  cout << "Digite 10 valores inteiros: " << endl;
  for(int i=0; i<10; i++){
    cout << "Valor: ";
    cin >> vet[i];
  }
}